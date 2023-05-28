//
// Created by чел on 28.05.2023.
//

#ifndef TIP_RATIONAL_H
#define TIP_RATIONAL_H


class rational {
public:
    rational(int a1 = 0, int b1 = 1);
    void set(int a1, int b1);
    void show() const;
    rational operator+(const rational& r) const;
    rational& operator++();
    bool operator==(const rational& r) const;
    bool operator>(const rational& r) const;
    rational& operator=(const rational& r);
    friend rational operator-(const rational& r1, const rational& r2);
private:
    void reduce();
    int gcd(int a, int b) const;
    int a, b;
};


#endif //TIP_RATIONAL_H
