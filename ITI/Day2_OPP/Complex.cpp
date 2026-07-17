#include "Complex.h"

// Constructor with two parameters
Complex::Complex(int real, int imaginary) {
    _real = real;
    _imaginary = imaginary;
}

// Setter for real part
void Complex::setReal(int real) {
    _real = real;
}

// Setter for imaginary part
void Complex::setImaginary(int imaginary) {
    _imaginary = imaginary;
}

// Getter for real part
int Complex::getReal() {
    return _real;
}

// Getter for imaginary part
int Complex::getImaginary() {
    return _imaginary;
}

Complex Complex::operator+(const Complex complec) {
    Complex result;
    int newReal = this->_real + complec._real;
    int newImaginary = this->_imaginary + complec._imaginary;
    result.setReal(newReal);
    result.setImaginary(newImaginary);
    return result;
}
