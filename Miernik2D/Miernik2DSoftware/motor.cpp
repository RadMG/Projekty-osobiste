#include "motor.h"

motor::motor(int x, int y, int z)
{
    min_position_deg = x;
    max_position_deg = y;
    current_position_deg = z;
}

bool motor::changePos(int x)
{
    if(x>=min_position_deg and x<=max_position_deg)
    {
        current_position_deg = x;
        return 1;
    }
    else{
        return 0;
    }
}

int motor::readPos()
{
    return(current_position_deg);
}
