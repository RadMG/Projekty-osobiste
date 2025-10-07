#include "sensor.h"

sensor::sensor() {
    value = 0;
    INmin = 0;
    INmax = 255;
    OUTmin = INmin;
    OUTmax = INmax;
    unit = "";
}

bool sensor::setVal(int x)
{

    if(x>=INmin and x<=INmax)
    {
        value = x;
        return 1;
    } else{
        return 0;
    }

}

double sensor::readVal()
{
    double result = OUTmin + (value - INmin) * (OUTmax - OUTmin) / (INmax - INmin);
    return(result);
}
bool sensor::setUnit(QString x)
{
    unit = x;
    return(1);
}
QString sensor::readUnit()
{
    return(unit);
}

bool sensor::setOutMin(double x)
{
    OUTmin = x;
    return(1);
}
double sensor::getOutMin()
{
    return(OUTmin);
}
bool sensor::setOutMax(double x)
{
    OUTmax = x;
    return(1);
}
double sensor::getOutMax()
{
    return(OUTmax);
}
