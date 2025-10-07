#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QString>
#include <QMessageBox>
#include "calc_class.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
MainWindow::~MainWindow()
{
    delete ui;
}
//Interakcja kalkulatora z GUI-----------------------------------------
calculator calc;
QString inputStr = "";
double inputNumA = 0;
double inputNumB = 0;
char op;

void setNumA()
{
    if (calc.get_mem_info()==0)
    {
        inputNumA = inputStr.toDouble();
    }
    else
    {
        inputNumA = calc.get_memory();
    }
}

//Obsługa guzików numerycznych--------------------------------------------
void MainWindow::on_Guzik_nr1_clicked()
{
    inputStr.append("1");
    ui->Ekran->display(inputStr);
}
void MainWindow::on_Guzik_nr2_clicked()
{
    inputStr.append("2");
    ui->Ekran->display(inputStr);
}
void MainWindow::on_Guzik_nr3_clicked()
{
    inputStr.append("3");
    ui->Ekran->display(inputStr);
}
void MainWindow::on_Guzik_nr4_clicked()
{
    inputStr.append("4");
    ui->Ekran->display(inputStr);
}
void MainWindow::on_Guzik_nr5_clicked()
{
    inputStr.append("5");
    ui->Ekran->display(inputStr);
}
void MainWindow::on_Guzik_nr6_clicked()
{
    inputStr.append("6");
    ui->Ekran->display(inputStr);
}
void MainWindow::on_Guzik_nr7_clicked()
{
    inputStr.append("7");
    ui->Ekran->display(inputStr);
}
void MainWindow::on_Guzik_nr8_clicked()
{
    inputStr.append("8");
    ui->Ekran->display(inputStr);
}
void MainWindow::on_Guzik_nr9_clicked()
{
    inputStr.append("9");
    ui->Ekran->display(inputStr);
}
void MainWindow::on_Guzik_nr0_clicked()
{
    inputStr.append("0");
    ui->Ekran->display(inputStr);
}
void MainWindow::on_Guzik_kropka_clicked()
{
    inputStr.append(".");
    ui->Ekran->display(inputStr);
}


//Obsługa guzików operacji-----------------------------------------------
void MainWindow::on_Guzik_plus_clicked()
{
    op = '+';
    setNumA();
    inputStr ="";
    ui->label->setText("+");
}
void MainWindow::on_Guzik_minus_clicked()
{
    op = '-';
    setNumA();
    inputStr ="";
    ui->label->setText("-");
}
void MainWindow::on_Guzik_mnozenie_clicked()
{
    op = '*';
    setNumA();
    inputStr ="";
    ui->label->setText("*");
}
void MainWindow::on_Guzik_dzielenie_clicked()
{
    op = '/';
    setNumA();
    inputStr ="";
    ui->label->setText("/");
}
void MainWindow::on_Guzik_modulo_clicked()
{
    op = '%';
    setNumA();
    inputStr ="";
    ui->label->setText("/");
}


//Obsługa guzików funkcyjnych---------------------------------------------
void MainWindow::on_Guzik_rowny_clicked()
{
    inputNumB = inputStr.toDouble();
    calc.calculate(inputNumA, inputNumB, op);
    if(calc.get_error()==0)
    {
        ui->label->setText("=");
        ui->Ekran->display(QString::number(calc.get_memory()));
    }
    else
    {
        QMessageBox messageBox;
        switch(calc.get_error()){
        case 1:
            messageBox.critical(0,"Błąd","Dzielenie przez zero niemożliwe!");
            messageBox.setFixedSize(500,200);
            break;

        case 2:
            messageBox.critical(0,"Błąd","Modulo przez zero niemożliwe!");
            messageBox.setFixedSize(500,200);
            break;
        }
        inputStr = "";
        inputNumA = 0;
        op = ' ';
        calc.set_mem_info(0);
        calc.resolve_error();
        ui->label->setText("");
        ui->Ekran->display("");
    }

}
void MainWindow::on_Guzik_clear_clicked()
{
    inputStr = "";
    ui->Ekran->display(inputStr);
    ui->label->setText("");
    calc.set_mem_info(0);
}





void MainWindow::on_actionO_Autorze_triggered()
{
    QMessageBox messageBox;
    messageBox.information(0,"O Autorze","Imię i nazwisko: Mikołaj Głos <br> Numer Indeksu: 287095 <br> Data wykonania: 04.2025");
    messageBox.setFixedSize(500,200);
}

