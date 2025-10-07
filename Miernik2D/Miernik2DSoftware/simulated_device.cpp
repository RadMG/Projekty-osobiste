
#include "simulated_device.h"
simulated_device::simulated_device()
{
    data = std::vector<std::vector<double>>(360, std::vector<double>(180));
}

void simulated_device::generateData(int x)
{
    const double center_x = 180;
    const double center_y = 90;
    const double max_dist = sqrt(center_x * center_x + center_y * center_y);

    for (int i = 0; i<=359; i++)
    {
        for (int j = 0; j<=179; j++)
        {
            double dx = i - center_x;
            double dy = j - center_y;
            double dist = sqrt(dx*dx + dy*dy);

            switch(x){
            case 1:
                data[i][j] = (0.5*(i/359.0) + 0.5*(j/179.0))*255;
            break;
            case 2:
            {
                data[i][j] = (1.0 - dist/max_dist) * 255;
            break;
            case 3:
                const double ring_spacing = 30.0;
                double wave = sin(2.0 * M_PI * dist / ring_spacing);
                data[i][j] = 255 * (0.5 + 0.5 * wave);
                break;
            }
            }

        }
    }

}

QString simulated_device::getData(QString text)
{
    QStringList inputList = text.split(':');
    int x = inputList[0].toInt();
    int y = inputList[1].toInt();
    int result = getData(x,y);
    return(QString::number(x) + ":" + QString::number(y) + ":" + QString::number(result));
}
\
double simulated_device::getData(int x, int y)
{
    return data[x][y];
}

bool simulated_device::saveData()
{
    return 1;
}

bool simulated_device::clearData()
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
