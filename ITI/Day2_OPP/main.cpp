#include <iostream>
#include "Complex.h"   // include header, not cpp

using namespace std;

int main() {
    Complex complex;   // calls default constructor (1,1)
    cout << "Imaginary part: " << complex.getImaginary() << endl;


    Complex* c1 = new Complex();        // default (1,1)
    Complex* c2 = new Complex(5);       // (5,1)
    Complex* c3 = new Complex(3,4);     // (3,4)

    // Perform operations using -> operator
    cout << "c1: (" << c1->getReal() << ", " << c1->getImaginary() << ")" << endl;
    cout << "c2: (" << c2->getReal() << ", " << c2->getImaginary() << ")" << endl;
    cout << "c3: (" << c3->getReal() << ", " << c3->getImaginary() << ")" << endl;

    // Modify values
    c1->setReal(10);
    c1->setImaginary(20);
    cout << "c1 after modification: (" << c1->getReal() << ", " << c1->getImaginary() << ")" << endl;
    //Apply Operator overloading
    Complex c4 = *c1 + *c2; // Using overloaded + operator
    cout << "c4 (c1 + c2): (" << c4.getReal() << ", " << c4.getImaginary() << ")" << endl;

    // Clean up heap memory
    delete c1;
    delete c2;
    delete c3;

    return 0;
}
