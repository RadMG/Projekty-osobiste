#include "meter.h"

meter::meter()
    : x_motor(0, 359, 0),
      y_motor(0, 179, 0)
{
    data = std::vector<std::vector<double>>(360, std::vector<double>(180));
}

bool meter::setCords(int x, int y)
{
    if (x_motor.changePos(x) == 1 and y_motor.changePos(y) == 1)
    {
        return 1;
    } else{
        return 0;
    }
}

bool meter::saveData()
{
    data[x_motor.readPos()][y_motor.readPos()] = readVal();
    return 1;
}

double meter::getData(int x, int y)
{
    return data[x][y];
}

bool meter::clearData()
{
    {
        for (int i = 0; i<=359; i++)
        {
            for (int j = 0; j<=179; j++)
            {
                data[i][j] = 0;
            }
        }

    }
    return 1;
}
