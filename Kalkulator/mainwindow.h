#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Guzik_nr1_clicked();

    void on_Guzik_nr2_clicked();

    void on_Guzik_nr3_clicked();

    void on_Guzik_nr4_clicked();

    void on_Guzik_nr5_clicked();

    void on_Guzik_nr6_clicked();

    void on_Guzik_nr7_clicked();

    void on_Guzik_nr8_clicked();

    void on_Guzik_nr9_clicked();

    void on_Guzik_nr0_clicked();

    void on_Guzik_kropka_clicked();

    void on_Guzik_clear_clicked();

    void on_Guzik_rowny_clicked();

    void on_Guzik_plus_clicked();

    void on_Guzik_minus_clicked();

    void on_Guzik_mnozenie_clicked();

    void on_Guzik_dzielenie_clicked();

    void on_Guzik_modulo_clicked();

    void on_actionO_Autorze_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
