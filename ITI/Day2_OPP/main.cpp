#include <iostream>
#include "Complex.h"   // include header, not cpp

using namespace std;

//Using friend function
Complex operator+ (int n, Complex c) {
    Complex result;
    result._real = c._real + n;
    result._imaginary = c._imaginary;
    return result;
}

int main() {
    const Complex complex;   // calls default constructor (1,1)
    cout << "Imaginary part: " << complex.getImaginary() << endl;


    auto* c1 = new Complex();        // default (1,1)
    const auto* c2 = new Complex(5);       // (5,1)
    auto* c3 = new Complex(3,4);     // (3,4)

    // Perform operations using -> operator
    cout << "c1: (" << c1->getReal() << ", " << c1->getImaginary() << ")" << endl;
    cout << "c2: (" << c2->getReal() << ", " << c2->getImaginary() << ")" << endl;
    cout << "c3: (" << c3->getReal() << ", " << c3->getImaginary() << ")" << endl;

    // Modify values
    c1->setReal(10);
    c1->setImaginary(20);
    cout << "c1 after modification: (" << c1->getReal() << ", " << c1->getImaginary() << ")" << endl;
    //Apply Operator overloading
    const Complex c4 = *c1 + *c2; // Using overloaded + operator
    cout << "c4 (c1 + c2): (" << c4.getReal() << ", " << c4.getImaginary() << ")" << endl;
    auto* c5 = new Complex();
    auto* c6 = new Complex();
    Complex c7(5,6);
    *c5 = ++(*c3);   // prefix: increment c3, assign result to *c5
    *c6 = (*c3)++;   // postfix: assign old c3 to *c6, then increment c3
    cout << "c5 (++c3): (" << c5->getReal() << ", " << c5->getImaginary() << ")" << endl;
    cout << "c6 (c3++): (" << c6->getReal() << ", " << c6->getImaginary() << ")" << endl;
    cout <<"c3: (" << c3->getReal() << ", " << c3->getImaginary() << ")" << endl;
    bool result = *c6 > *c3;
    cout << "result of c6 > c3: " << result << endl;
    c1->Print();
    // Clean up heap memory
    delete c1;
    delete c2;
    delete c3;
    delete c5;
    delete c6;
    //Using friend Function above
    Complex res = 3 + c7;
    c7.Print();
    res.Print();

    return 0;
}
