#ifndef TIP_EQ_H
#define TIP_EQ_H


class eq {
private:
    double a, b, c, D;

public:
    eq(double a1, double b1, double c1);

    void set (double a1, double b1, double c1);

    double find_X();

    double find_Y(double x1);

    eq operator + (eq& another);

    void getCoefficients();
};


#endif //TIP_EQ_H
