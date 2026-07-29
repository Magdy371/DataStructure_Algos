#ifndef DATASTRUCTURE_ALGOS_COMPLEX_H
#define DATASTRUCTURE_ALGOS_COMPLEX_H
#include <iostream>
using namespace std;

class Complex {
    int _real;
    int _imaginary;
public:
    //Chaining constructor
    Complex() : Complex(1,1){}
    Complex(int real): Complex( real, 1){}
    Complex(int real, int imaginary);
    void setReal(int real);
    void setImaginary(int imaginary);
    [[nodiscard]] int getReal() const;
    [[nodiscard]] int getImaginary() const;
    //Operator overloading
    Complex operator+ (Complex complex) const;
    Complex operator++ ();    //Prefix
    Complex operator++ (int); //Postfix
    bool operator>( Complex c);
    void Print();
    friend Complex operator+ (int x, Complex complex);
    friend ostream& operator<<(ostream& obj, Complex c);

};


#endif //DATASTRUCTURE_ALGOS_COMPLEX_H