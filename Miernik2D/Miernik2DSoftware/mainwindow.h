#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPortInfo>
#include <QMessageBox>
#include <QtCharts>
#include "serial_port.h"
#include "meter.h"
#include "simulated_device.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class mainwindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_refreshPortsBTN_clicked();
    void on_openSerialBTN_clicked();
    void on_xValueDIAL_valueChanged(int value);
    void on_yValueSLDR_valueChanged(int value);
    void on_sendBTN_clicked();
    void on_xValueDIAL_sliderReleased();
    void on_yValueSLDR_sliderReleased();
    void on_sensorUnitLE_editingFinished();
    void on_sensorMinSB_editingFinished();
    void on_sensorMaxSB_editingFinished();
    void on_demoBTN_toggled(bool checked);
    void on_scan2DBTN_clicked();
    void on_clearMemBTN_clicked();
    void on_scanXBTN_toggled(bool checked);
    void on_scanYBTN_toggled(bool checked);
    void on_sensorFormatCBX_currentTextChanged(const QString &arg1);
    void on_demoOptionCBX_currentTextChanged(const QString &arg1);

    void readData(QByteArray Data);// Ważne! to nie slot GUI

private:
    Ui::mainwindow *ui;
    void loadPorts(); //Metoda ładująca aktywne porty do portListCBX

    bool sendPos(); //Metoda wysyłająca pozycję z nastawy
    void updatePos(); //Metoda aktualizująca GUI

    void setFormat(int, int, QString, bool);//Ułatwienie do presetowania formatów

    void setupChart(int, int); //Konfiguracja konstruktora wykresu
    void killChart(); //Konfiguracja destruktora wykresu
    void refreshChart(); //Odświeżannie wykresu



    bool isDemo;
    bool isScanning;
    char scan2D_axis;
    int sensor_bar_scale;
    serial_port _port;
    simulated_device demo_device;
    meter meter_A;
    QLineSeries *series = nullptr;
    QChart *chart = nullptr;
    QChartView *chartView = nullptr;
    QValueAxis *axisX = nullptr;
    QValueAxis *axisY = nullptr;
};
#endif // MAINWINDOW_H
