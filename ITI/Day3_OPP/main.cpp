#include "Complex.h"
#include <iostream>
using namespace std;

/**
 * OStream is used to send data to console
 * IStream is used to take input data from console
 */
ostream& operator<<(ostream& obj, Complex c) {
    obj << c.getReal() << " + " << c.getImaginary() << "i"<<endl;;
    return obj;
}
int main() {

    Complex complex1(1,1);
    Complex complex2(2,3);
    cout << complex1;
    return 0;
}