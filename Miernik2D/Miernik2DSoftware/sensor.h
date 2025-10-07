#ifndef SENSOR_H
#define SENSOR_H
#pragma once
#include <QString>


class sensor
{
protected:
    double value;
    double INmin;
    double INmax;
    double OUTmin;
    double OUTmax;
    QString unit;
public:
    sensor();
    bool setVal(int x);
    double readVal();

    bool setUnit(QString x);
    QString readUnit();

    bool setOutMin(double x);
    bool setOutMax(double x);

    double getOutMin();
    double getOutMax();
};

#endif // SENSOR_H
