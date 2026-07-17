#ifndef DATASTRUCTURE_ALGOS_COMPLEX_H
#define DATASTRUCTURE_ALGOS_COMPLEX_H


class Complex {
private:
    int _real;
    int _imaginary;
public:
    //Chaining constructor
    Complex() : Complex(1,1){}
    Complex(int real): Complex( real, 1){}
    Complex(int real, int imaginary);
    void setReal(int real);
    void setImaginary(int imaginary);
    int getReal();
    int getImaginary();
    //Operator overloading
    Complex operator+ (const Complex complec);
};


#endif //DATASTRUCTURE_ALGOS_COMPLEX_H