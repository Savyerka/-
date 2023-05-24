#include "eq.h"
#include "iostream"
#include "cmath"

eq::eq(double a1, double b1, double c1) {
    a = a1;
    b = b1;
    c = c1;
    D = b * b - 4 * a * c;
}

void eq::set(double a1, double b1, double c1) {
    a = a1;
    b = b1;
    c = c1;
    D = b * b - 4 * a * c;
}

double eq::find_X() {
    if (D == 0) {
        std::cout << "One root: " << std::endl;
        double  x = (-b - sqrt(D)) / (2 * a);
        std::cout << x << std::endl;
        return x;
    }
    else {
        std::cout << "Two roots, largest: " << std::endl;
        double x1 = (-b - sqrt(D)) / (2 * a);
        double x2 = (-b + sqrt(D)) / (2 * a);
        if (x1 > x2) {
            std::cout << x1 << std::endl;
            return x1;
        }
        else {
            std::cout << x2 << std::endl;
            return x2;
        }
    }
}

double eq::find_Y(double x1) {
    return a * x1 * x1 + b * x1 + c;
}

eq eq::operator+(eq& another) {
    return eq(a + another.a, b + another.b, c + another.c);
}

void eq::getCoefficients() {
    std::cout << "sum of equations (New coefficients of equations): " << a << " " << b << " " << c << std::endl;
}