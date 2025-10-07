#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QSerialPortInfo>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainwindow)
{
    ui->setupUi(this);
    isDemo = 0; //Tryb demo wyłączony
    isScanning = 0; //Nie skanujemy
    sensor_bar_scale = 1;// Patrz void::updatePos() i sensorMaxLE
    scan2D_axis = 'x'; //Domyślnie skanujemy x
    loadPorts(); //Załadowanie portów przy starcie
    connect(&_port, &serial_port::dataReceived, this, &MainWindow::readData); //Połączenie sygnału dataReceived z serial_port z sygnałem readData w MainWindow
    ui->xValueBAR->setStyleSheet("QProgressBar::chunk { background-color: grey; }");
    ui->yValueBAR->setStyleSheet("QProgressBar::chunk { background-color: grey; }");
    ui->sensorBAR->setStyleSheet("QProgressBar::chunk { background-color: grey; }");
    setupChart(359, 255);
    ui->sensorFormatCBX->addItem("Surowe dane");
    ui->sensorFormatCBX->addItem("Procent");
    ui->sensorFormatCBX->addItem("Napięcie 5V");
    ui->sensorFormatCBX->addItem("Użytkownika");
    ui->demoOptionCBX->addItem("Gradient");
    ui->demoOptionCBX->addItem("Punkt");
    ui->demoOptionCBX->addItem("Pierścienie");
}

MainWindow::~MainWindow()
{
    delete ui;
    killChart();
}

void MainWindow::killChart()
{

    delete series;
    delete chart;
    delete chartView;
}

void MainWindow::setupChart(int x, int y)
{
    series = new QLineSeries();
    for (int i = 0; i <= 359; ++i)
    {
        series->append(i, 0);

    }
    chart = new QChart();
    axisX = new QValueAxis();
    axisY = new QValueAxis();
    axisX->setRange(0, x);
    axisY->setRange(0, y);
    axisX->setLabelFormat("%d");
    axisY->setLabelFormat("%d");
    chart->addAxis(axisX, Qt::AlignBottom);
    chart->addAxis(axisY, Qt::AlignLeft);
    axisX->setTitleText(QString("Kąt płaszczyzny X [°]"));
    axisY->setTitleText("Wartość sensora [DEC]");
    chart->addSeries(series);
    series->attachAxis(axisX);
    series->attachAxis(axisY);
    chart->legend()->hide();
    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    QVBoxLayout *layout = new QVBoxLayout(ui->widget);
    layout->addWidget(chartView);
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------Konstruktor, destruktor, powiązane metody
void MainWindow::loadPorts()
{
    ui->portListCBX->clear(); //Wyczyść portListCBX jeżeli ma zawartość
    foreach (auto &port, QSerialPortInfo::availablePorts()){ //Dla każdego dostępnego portu
        ui->portListCBX->addItem(port.portName()); //Dodaj pozycję do portListCBX
    }
}

//Metoda poniżej aktywuje się automatycznie po uzyskaniu sygnału z modułu serial port
void MainWindow::readData(QByteArray data)
{
    while (ui->serialRecLW->count() > 1000) {// Ograniczenie pojemności logów do 1000
        delete ui->serialRecLW->takeItem(0);
    }
    if(isDemo)
    {
        ui->serialRecLW->addItem(QString("DEMO>>>[" + data + "]"));
    } else{
        ui->serialRecLW->addItem(QString(">>>[" + data + "]"));
    }
    ui->serialRecLW->scrollToBottom();
    QStringList inputList = QString(data).split(':'); //Rozbicie wiadomości na trzy pola

    if (meter_A.setCords(inputList[0].toInt(), inputList[1].toInt()) and meter_A.setVal(inputList[2].toInt()) and inputList.size()==3)
    {
        int x = inputList[0].toInt();
        int y = inputList[1].toInt();
        //int z = inputList[2].toInt();
        meter_A.saveData();
        updatePos();
        if(isScanning){
        if(scan2D_axis == 'x'){
        if(x != 359) //Loop do skanowania 2D musi być tutaj ze względu na powiązanie z sygnałem dataReceived
        {
            ui->xValueDIAL->setValue(x+1);
            sendPos();
        }
        else if(x == 359)
        {
            isScanning = 0;
            refreshChart();
        }
        }
        if(scan2D_axis == 'y'){
            if(y != 179)
            {
                ui->yValueSLDR->setValue(y+1);
                sendPos();
            }
            else if(y == 179)
            {
                isScanning = 0;
                refreshChart();
            }
        }
        }else{
            refreshChart();
        }
    }else{
        QMessageBox::critical(this, "Błąd", "Nieprawidłowy format wiadomości portu szeregowego");
        isScanning = 0;
    }
}

bool::MainWindow::sendPos()
{
    QString msg = QString::number(ui->xValueDIAL->value()) + ":" + QString::number(ui->yValueSLDR->value()); //Formatowanie wiadomości wyjściowej
    if(isDemo)
    {
        ui->serialRecLW->addItem("DEMO<<[" + msg +"]"); //Formatowanie wiadomości wysłanej dla demo
        ui->serialRecLW->scrollToBottom(); //Przewinięcie w dół dla nowej wiadomości
        readData(demo_device.getData(msg).toUtf8()); //Wywołanie readData(getData) gdzie "wysyłamy" wiadomość i udajemy że informacja zwrotna przyszła z portu
        return 1;
    }
    else{
    ui->serialRecLW->addItem("<<[" + msg +"]"); //Formatowanie wiadomości wysyłanej dla portu
    ui->serialRecLW->scrollToBottom(); //Przewinięcie w dół
    if (int numBytes = _port.write(msg.toUtf8()) == -1)//Wysłanie wiadomości na port
    {
        QMessageBox::critical(this, "Błąd", "Proszę otworzyć wybrany port");
        return 0;
    }else{
        return 1;
    }
}
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------Komunikacja szeregowa logika

void MainWindow::setFormat(int min, int max, QString unit, bool isLocked)
{
    ui->sensorMinSB->setValue(min);
    on_sensorMinSB_editingFinished();
    ui->sensorMaxSB->setValue(max);
    on_sensorMaxSB_editingFinished();
    ui->sensorUnitLE->setText(unit);
    on_sensorUnitLE_editingFinished();

    ui->sensorMinSB->setReadOnly(isLocked);
    ui->sensorMaxSB->setReadOnly(isLocked);
    ui->sensorUnitLE->setReadOnly(isLocked);
}

void::MainWindow::updatePos()
{
    ui->xValueDIAL->setValue(meter_A.x_motor.readPos());
    ui->xValueBAR->setStyleSheet("QProgressBar::chunk { background-color: green; }");
    ui->yValueSLDR->setValue(meter_A.y_motor.readPos());
    ui->yValueBAR->setStyleSheet("QProgressBar::chunk { background-color: green; }");
    ui->sensorBAR->setValue(meter_A.readVal()*sensor_bar_scale); //Obiekt bar przyjmuje tylko int więc konieczne jest przeskalowanie double 1,11 -> 111 itp.
    ui->sensorBAR->setStyleSheet("QProgressBar::chunk { background-color: blue; }");
    ui->sensorLBL->setText(QString(QString::number(meter_A.readVal()) + " " + meter_A.readUnit()));
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------Metody pomocnicze

void MainWindow::on_openSerialBTN_clicked()
{
    bool isConnected =_port.connect(ui->portListCBX->currentText()); //Otwarcie portu z weryfikacją
    if(!isConnected){
        QMessageBox::critical(this, "Błąd", "Wystąpił problem z otwarciem portu");
    } else{
        QMessageBox::information(this, "Uwaga", "Port otwarty");
    }
}

void MainWindow::on_refreshPortsBTN_clicked()
{
    loadPorts(); //Odświeżenie listy
}

void MainWindow::on_sendBTN_clicked()
{
    QString msg = ui->serialTransLE->text();
    ui->serialRecLW->addItem(msg);
    auto numBytes = _port.write(msg.toUtf8()); //Możliwe ręczne przesłanie wiadomości
    if (numBytes == -1){
        QMessageBox::critical(this, "Błąd", "Nie wybrano portu");
    }
    if (numBytes == -2){
        QMessageBox::critical(this, "Błąd", "Port nie jest otwarty");
    }
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------Komunikacja szeregowa GUI

void MainWindow::on_xValueDIAL_valueChanged(int value)
{
    ui->sensorBAR->setStyleSheet("QProgressBar::chunk { background-color: grey; }");
    ui->xValueBAR->setStyleSheet("QProgressBar::chunk { background-color: grey; }");
    ui->xValueBAR->setValue(value);
    ui->xValueLBL->setText(QString::number(value) + "°");
}

void MainWindow::on_yValueSLDR_valueChanged(int value)
{
    ui->sensorBAR->setStyleSheet("QProgressBar::chunk { background-color: grey; }");
    ui->yValueBAR->setStyleSheet("QProgressBar::chunk { background-color: grey; }");
    ui->yValueBAR->setValue(value);
    ui->yValueLBL->setText(QString::number(value) + "°");
}

void MainWindow::on_xValueDIAL_sliderReleased()
{
    sendPos();
}

void MainWindow::on_yValueSLDR_sliderReleased()
{
    sendPos();
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------Regulacja pozycji GUI

void MainWindow::on_sensorUnitLE_editingFinished()
{
    QString text = ui->sensorUnitLE->text();
    meter_A.setUnit(text);
    axisY->setTitleText("Wartość sensora ["+ text +"]");
}

void MainWindow::on_sensorMinSB_editingFinished()
{
    int value = ui->sensorMinSB->value();
    if(value < meter_A.getOutMax())
    {
    meter_A.setOutMin(value);
    ui->sensorBAR->setMinimum(value);
    meter_A.clearData();
    series->clear();
    refreshChart();
    } else{
        ui->sensorMinSB->clear();
        QMessageBox::critical(this, "Błąd", "Wartość większa od maksymalnej");
    }
}

void MainWindow::on_sensorMaxSB_editingFinished()
{
    int value = ui->sensorMaxSB->value();
    if(value > meter_A.getOutMin())
    {
    meter_A.setOutMax(value);
    sensor_bar_scale = static_cast<int>(std::pow(10, 3 - static_cast<int>(std::log10(value)))); //Operacja przeskalowania double na int dla lepszej precyzji
    ui->sensorBAR->setMaximum(value * sensor_bar_scale);
    meter_A.clearData();
    series->clear();
    refreshChart();
    } else{
        ui->sensorMaxSB->clear();
        QMessageBox::critical(this, "Błąd", "Wartość mniejsza od maksymalnej");
    }
}

void MainWindow::on_sensorFormatCBX_currentTextChanged(const QString &arg1)
{
    if(arg1 == "Surowe dane")
    {
        setFormat(0,255,"DEC",1);
    }
    else if(arg1 == "Procent")
    {
        setFormat(0,100,"%",1);
    }
    else if(arg1 == "Napięcie 5V")
    {
        setFormat(0,5,"V",1);
    }
    else if(arg1 == "Użytkownika")
    {
        setFormat(0,255,"DEC",0);
    }
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------Odczyt sensora GUI
void MainWindow::refreshChart()
{
    double minVal = std::numeric_limits<double>::max();
    double maxVal = std::numeric_limits<double>::min();
    int range = 0; //By uciszyć kompilator
    int xPos = meter_A.x_motor.readPos();
    int yPos = meter_A.y_motor.readPos();
    series->clear();

    if(scan2D_axis == 'x')
    {
        range = 359;
        for (int i = 0; i <= range; ++i)
        {
            double y = meter_A.getData(i, yPos);
            series->append(i, y);

            if (y < minVal) minVal = y;
            if (y > maxVal) maxVal = y;
        }
    }
    else if(scan2D_axis == 'y')
    {
        range = 179;
        for (int i = 0; i <= range; ++i)
        {
            double y = meter_A.getData(xPos, i);
            series->append(i, y);

            if (y < minVal) minVal = y;
            if (y > maxVal) maxVal = y;
        }
    }
    axisY->setRange(minVal, maxVal);
    axisX->setRange(0, range);
    chart->update();
    chartView->repaint();
}

void MainWindow::on_clearMemBTN_clicked()
{
    meter_A.clearData();
    series->clear();
    refreshChart();
}

void MainWindow::on_demoBTN_toggled(bool checked)
{
    isDemo = checked; //Przełączenie trybu DEMO
    if(isDemo){
    disconnect(&_port, &serial_port::dataReceived, this, &MainWindow::readData); //Dla demo odłączamy port
    }else{
    connect(&_port, &serial_port::dataReceived, this, &MainWindow::readData);//Po wyjściu z demo znowu podłączamy port
    }
}

void MainWindow::on_demoOptionCBX_currentTextChanged(const QString &arg1)
{
    if(arg1 == "Gradient")
    {
        demo_device.generateData(1);
        meter_A.clearData();
        series->clear();
        refreshChart();
    }
    else if(arg1 == "Punkt")
    {
        demo_device.generateData(2);
        meter_A.clearData();
        series->clear();
        refreshChart();
    }
    else if(arg1 == "Pierścienie")
    {
        demo_device.generateData(3);
        meter_A.clearData();
        series->clear();
        refreshChart();
    }
}

void MainWindow::on_scan2DBTN_clicked()
{
    ui->serialRecLW->clear();
    isScanning = 1;

    if(scan2D_axis == 'x')
    {
        sendPos();
    }
    else if(scan2D_axis == 'y')
    sendPos();
}

void MainWindow::on_scanXBTN_toggled(bool checked)
{
    if(checked)
    {
        scan2D_axis = 'x';
        axisX->setTitleText(QString("Kąt płaszczyzny X [°]"));
        refreshChart();
    }
}

void MainWindow::on_scanYBTN_toggled(bool checked)
{
    if(checked)
    {
        scan2D_axis = 'y';
        axisX->setTitleText(QString("Kąt płaszczyzny Y [°]"));
        refreshChart();
    }
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------Funkcjonalności GUI
