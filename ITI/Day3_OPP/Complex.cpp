#include "Complex.h"

#include <iostream>

// Constructor with two parameters
Complex::Complex(const int real, const int imaginary, const int size)
{
    _real = real;
    _imaginary = imaginary;
    _size = size;

    // Only allocate memory if size is valid
    if (size > 0)
    {
        this->arr = new Complex[size];
    }
    else
    {
        this->arr = nullptr;
    }
}

Complex::~Complex()
{
    delete[] arr;
    arr = nullptr;
}

// Setter for real part
void Complex::setReal(const int real)
{
    _real = real;
}

// Setter for imaginary part
void Complex::setImaginary(const int imaginary)
{
    _imaginary = imaginary;
}

// Getter for real part
int Complex::getReal() const
{
    return _real;
}

// Getter for imaginary part
int Complex::getImaginary() const
{
    return _imaginary;
}

Complex Complex::operator+(const Complex complex) const
{
    Complex result;
    const int newReal = this->_real + complex._real;
    const int newImaginary = this->_imaginary + complex._imaginary;
    result.setReal(newReal);
    result.setImaginary(newImaginary);
    return result;
}
// PREFIX
Complex Complex::operator++()
{
    this->_real++;
    this->_imaginary++;
    return *this;
}

Complex Complex::operator++(int)
{
    Complex temp = *this;
    this->_real++;
    this->_imaginary++;
    return temp;
}

bool Complex::operator>(Complex c)
{
    double self_mag_sq = (this->_real * this->_real) + (this->_imaginary * this->_imaginary);
    double c_mag_sq = (c._real * c._real) + (c._imaginary * c._imaginary);

    return self_mag_sq > c_mag_sq;
}

// Print Method
void Complex::Print()
{
    std::cout << this->getReal() << " + " << this->getImaginary() << "i" << std::endl;
}

void Complex::setComplexArray(Complex value, int index)
{
    if (this->arr == nullptr)
    {
        std::cout << "Error: Array is not allocated." << std::endl;
        return;
    }

    if (index >= 0 && index < _size)
    {
        this->arr[index] = value;
    }
    else
    {
        std::cout << "Error: Index " << index << " out of bounds." << std::endl;
    }
}

void Complex::getComplexArray()
{
    int size = _size;
    for (int i = 0; i < size; i++)
    {
        cout << "index: " << i << " -> " << this->arr[i].getReal() << " + " << this->arr[i].getImaginary() << endl;
    }
}
