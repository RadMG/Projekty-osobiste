
#include "calc_class.h"
enum error {No_error = 0, DIV_Zero = 1, MOD_Zero = 2, OP_Inv =3};
double memory = 0;
bool mem_used = 0;
int error_code = No_error;

double calculator::sum(double a, double b) { return(a + b); }
double calculator::diff(double a, double b) { return(a - b); }
double calculator::mult(double a, double b) { return(a * b); }
double calculator::div(double a, double b)
{
    if (b == 0)
    {
        error_code = DIV_Zero;
        return(a);
    }
    else
    {
        return(a / b);
    }
}
double calculator::mod(double a, double b)
{
    if (b == 0) {
        error_code = MOD_Zero;
        return(a);
    }
    else {
        return (a - (int)(a / b) * b);
    }
}
void calculator::set_mem_info(bool val)
{
    mem_used = val;
}
bool calculator::get_mem_info()
{
    return mem_used;
}
void calculator::refresh_mem_info()
{

    if (memory == 0)
    {
        set_mem_info(0);
    }
    else
    {
        set_mem_info(1);
    }
}
void calculator::calculate(double a, double b, char OP)
{
    switch (OP) {
    case '+':
        memory = sum(a, b);
        break;
    case '-':
        memory = diff(a, b);
        break;
    case '*':
        memory = mult(a, b);
        break;
    case '/':
        memory = div(a, b);
        break;
    case '%':
        memory = mod(a, b);
        break;
    default:
        error_code = OP_Inv;
    }
    refresh_mem_info();
}
double calculator::get_memory()
{
    return memory;
}
int calculator::get_error()
{
    return error_code;
}
void calculator::resolve_error()
{
    error_code = 0;
}
