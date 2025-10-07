#ifndef MOTOR_H
#define MOTOR_H
#pragma once

class motor
{
protected:
    int min_position_deg;
    int max_position_deg;
    int current_position_deg;
public:
    motor(int, int, int);
    bool changePos(int);
    int readPos();
};

#endif // MOTOR_H
