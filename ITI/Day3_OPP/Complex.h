#ifndef DATASTRUCTURE_ALGOS_COMPLEX_H
#define DATASTRUCTURE_ALGOS_COMPLEX_H
#include <iostream>
using namespace std;

class Complex
{
    int _real;
    int _imaginary;
    int _size;
    Complex *arr;

public:
    // Chaining constructor
    Complex() : Complex(1, 1, 0) {}
    Complex(int real) : Complex(real, 1, 6) {}
    Complex(int real, int imaginary, int size);
    ~Complex();
    void setReal(int real);
    void setImaginary(int imaginary);
    [[nodiscard]] int getReal() const;
    [[nodiscard]] int getImaginary() const;
    // Operator overloading
    Complex operator+(Complex complex) const;
    Complex operator++();    // Prefix
    Complex operator++(int); // Postfix
    bool operator>(Complex c);
    void Print();
    friend Complex operator+(int x, Complex complex);
    friend ostream &operator<<(ostream &obj, Complex c);
    friend istream &operator>>(istream &obj, Complex &c);

    void setComplexArray(Complex value, int index);
    void getComplexArray();
};

#endif // DATASTRUCTURE_ALGOS_COMPLEX_H