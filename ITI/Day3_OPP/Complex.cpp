#include "Complex.h"

#include <iostream>

// Constructor with two parameters
Complex::Complex(const int real, const int imaginary) {
    _real = real;
    _imaginary = imaginary;
}

// Setter for real part
void Complex::setReal(const int real) {
    _real = real;
}

// Setter for imaginary part
void Complex::setImaginary(const int imaginary) {
    _imaginary = imaginary;
}

// Getter for real part
int Complex::getReal() const {
    return _real;
}

// Getter for imaginary part
int Complex::getImaginary() const {
    return _imaginary;
}

Complex Complex::operator+(const Complex complex) const {
    Complex result;
    const int newReal = this->_real + complex._real;
    const int newImaginary = this->_imaginary + complex._imaginary;
    result.setReal(newReal);
    result.setImaginary(newImaginary);
    return result;
}
//PREFIX
Complex Complex::operator++() {
    this->_real++;
    this->_imaginary++;
    return *this;
}

Complex Complex::operator++(int) {
    Complex temp = *this;
    this->_real++;
    this->_imaginary++;
    return temp;
}

bool Complex::operator>(Complex c) {
    double self_mag_sq = (this->_real * this->_real) + (this->_imaginary * this->_imaginary);
    double c_mag_sq = (c._real * c._real) + (c._imaginary * c._imaginary);

    return self_mag_sq > c_mag_sq;
}

//Print Method
void Complex::Print() {
    std::cout << this->getReal() << " + " << this->getImaginary() << "i"<< std::endl;
}
