#ifndef METER_H
#define METER_H
#include <vector>
#include "device.h"
#include "sensor.h"
#include "motor.h"

class meter: public device, public sensor
{
    std::vector<std::vector<double>> data;
public:
    motor x_motor;
    motor y_motor;
    meter();
    bool setCords(int, int);
    bool saveData();
    double getData(int, int);
    bool clearData();
};

#endif // METER_H
