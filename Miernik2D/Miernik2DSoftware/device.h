#ifndef DEVICE_H
#define DEVICE_H
#include <vector>
class device
{
protected:
    std::vector<std::vector<double>> data;
public:
    device();
    virtual bool saveData() = 0;
    virtual double getData(int,int) = 0;
    virtual bool clearData() = 0;
};

#endif // DEVICE_H
