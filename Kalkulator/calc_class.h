#ifndef CALC_CLASS_H
#define CALC_CLASS_H

class calculator {
private:
    double memory;
    bool mem_used;
    int error_code;
    double sum(double a, double b);
    double diff(double a, double b);
    double mult(double a, double b);
    double div(double a, double b);
    double mod(double a, double b);
    void refresh_mem_info();
public:
    enum error {};
    void calculate(double a, double b, char OP);
    void set_mem_info(bool val);
    bool get_mem_info();
    double get_memory();
    int get_error();
    void resolve_error();
};


#endif // CALC_CLASS_H
