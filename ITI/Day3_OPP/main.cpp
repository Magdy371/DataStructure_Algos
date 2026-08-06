#include "Complex.h"
#include <iostream>
using namespace std;

/**
 * OStream is used to send data to console
 * IStream is used to take input data from console
 */
ostream &operator<<(ostream &obj, Complex c)
{
    obj << c.getReal() << " + " << c.getImaginary() << "i" << endl;
    ;
    return obj;
}
istream &operator>>(istream &obj, Complex &c)
{
    obj >> c._real >> c._imaginary;
    return obj;
}
int main()
{

    Complex complex1(1, 1, 5);
    Complex complex2(2, 2, 4);
    Complex complex4(3, 3, 4);
    Complex complex3;
    cout << "ReWrite A complex c3: " << endl;
    cin >> complex3;
    cout << complex3;
    // complex1 = complex3;
    // complex1.Print();
    //= -> have automatic overloading
    complex1.setComplexArray(complex2, 0);
    complex1.setComplexArray(complex4, 2);
    complex1.setComplexArray(complex2, 0);
    complex1.setComplexArray(complex4, 2);
    complex1.setComplexArray(complex2, 0);
    complex1.getComplexArray();

    return 0;
}