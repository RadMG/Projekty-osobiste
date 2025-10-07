#pragma once
#ifndef SIMULATED_DEVICE_H
#define SIMULATED_DEVICE_H
#include <vector>
#include <QString>
#include <QStringList>
#include <cmath>
#include "device.h"


class simulated_device: protected device
{
std::vector<std::vector<double>> data; //Macierz sztucznych danych
public:
    simulated_device();
    void generateData(int); //Metoda do wypełniania macierzy sztucznych danych
    QString getData(QString text); //Metoda do pobierania danych udająca komunikację przez port szeregowy
    bool saveData();
    double getData(int, int);
    bool clearData();
};
#endif // SIMULATED_DEVICE_H
