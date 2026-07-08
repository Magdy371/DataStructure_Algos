#include <iostream>

using namespace std;

// Pass by value (does NOT modify original variables)
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Pass by pointer (modifies original variables)
void swapByPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Pass by reference (modifies original variables)
void swapByReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

bool isEven(int number) {
    return (number % 2 == 0);
}
//represent default variable
//functions overloading
int sumFunction(int x=0, int y=9) {
    return x + y;
}

double sumFunction(double x=0.0, double y=9) {
    return x + y;
}

float sumFunction(float x=0.0f, float y=9.0f) {
    return x + y;
}

//Struct
struct Employee {
    string name;
    int age{};
    double salary{};
};
struct Point {
    int x;
    int y;
};

int multiplieFunction(int x=0, int y=9) {
    return x * y;
}
Point multiplieFunction(Point p1, Point p2) {
    Point result;
    result.x = p1.x * p2.x;
    result.y = p1.y * p2.y;
    return result;
}
int main() {
    cout << "Hello to C++" << endl;

    // User Input
    cout << "Enter your age: ";
    int age;
    cin >> age;

    cout << "Your age is: " << age << endl << endl;

    // ==========================
    // Type Casting
    // ==========================

    // Implicit Casting
    int number = 3;
    double implicitCast = number;

    cout << "Implicit Casting:" << endl;
    cout << "int value: " << number << endl;
    cout << "double value: " << implicitCast << endl << endl;

    // Explicit Casting
    double salary = 2334.55667;

    cout << "Explicit Casting:" << endl;
    cout << "Actual salary: " << salary << endl;

    int integerSalary = static_cast<int>(salary);
    cout << "Salary after casting to int: "
         << integerSalary << endl << endl;

    // ==========================
    // Pointers
    // ==========================
    cout << "Pointers:" << endl;

    int* ptr = &number;

    cout << "Value of number: " << number << endl;
    cout << "Address of number: " << ptr << endl;
    cout << "Value through pointer: " << *ptr << endl << endl;

    // ==========================
    // Swap Examples
    // ==========================
    int first = 5;
    int second = 20;

    cout << "Initial values:" << endl;
    cout << "first = " << first
         << ", second = " << second << endl << endl;

    // Pass by Value
    cout << "Pass By Value:" << endl;
    swapByValue(first, second);

    cout << "first = " << first
         << ", second = " << second
         << " (unchanged)" << endl << endl;

    // Pass by Pointer
    cout << "Pass By Pointer:" << endl;
    swapByPointer(&first, &second);

    cout << "first = " << first
         << ", second = " << second << endl << endl;

    // Pass by Reference
    cout << "Pass By Reference:" << endl;
    swapByReference(first, second);

    cout << "first = " << first
         << ", second = " << second << endl;

    // ==========================
    // Type Booleans
    // ==========================
    int value = 6;
    bool result = isEven(value);
    cout << "Value of number: " << value << endl;
    if (result == 0) {
        cout << "result of isEvenNumber: "<< "false" << endl;
    }else {
        cout << "result of isEvenNumber: "<< "true" << endl;
    }

    // ==========================
    // Type string
    // ==========================
    cout << "Enter your name "<< endl;
    string name;
    cin >> name;
    cout << "Name is: " << name << endl;

    // ==========================
    // default variable/ Functions & function Overloading
    // ==========================

    int res1 = sumFunction(100, 500) ;
    double res2 = sumFunction(3.14159, 889.887);
    float res3 = sumFunction(3.14159f, 889.887f);
    cout << "Sum function using int arguments is: " << res1 << endl;
    cout << "Sum function using double arguments is: " << res2 << endl;
    cout << "Sum function using float arguments is: " << res3 << endl;

    // ==========================
    // Arrays/ Dynamic-Static allocation
    // ==========================
    //Static allocation
    int arrS[3];
    arrS[0] = 10;
    arrS[1] = 20;
    arrS[2] = 30;
    //Dynamic Allocation
    int* arrH = new int[3];
    arrH[0] = 10;
    arrH[1] = 20;
    arrH[2] = 30;

    //array of Pointers
    int* arrP [2];
    arrP[0] = arrH;
    arrP[1] = arrS;
    //Print array heap data through pointer
    // Print array heap data through pointer
    for (int i = 0; i < 3; i++) {
        cout << "element " << i << ": " << arrP[0][i] << endl;
    }
    delete[] arrH;

    // ==========================
    // Struct/ system-user type
    // ==========================
    //1- stored in stack
    Employee emp;
    emp.name = "Ahmed Mohamed";
    emp.age = 27;
    emp.salary = 50000;
    cout << "name: "<< emp.name << endl << "age: " << emp.age << endl<< "salary: " << emp.salary << endl;

    //2- Stored in heap
    auto* emp2 = new Employee();
    emp2 -> name = "Mohamed Ahmed";
    emp2 -> age = 24;
    emp2->salary = 40000;
    cout << "name: "<< emp2->name << endl << "age: " << emp2->age << endl << "salary: " << emp2->salary << endl<<endl;

    cout << "==================================================================";

    // Create a new array of struct
    Employee empArr[3];
    for (int i = 0; i < 3; i++) {
        empArr[i].name = "Ahmed Mohammed";
        empArr[i].age = 25 + i;
        empArr[i].salary = 40000+ i*1000;
        cout << "year "<< i  << " .name: "<< empArr[i].name << endl << "age: " << empArr[i].age << endl<< "salary: " << empArr[i].salary << endl<< endl;
    }

    cout << "==================================================================";

    Employee* empPointer[3];
    for (int i = 0; i < 3; i++) {
        empPointer[i] = new Employee();
        empPointer[i]->name = "Ahmed Mohammed";
        empPointer[i]->age = 25 + i;
        empPointer[i]->salary = 40000+ i*1000;
        cout << "year "<< i  << " .name: "<< empPointer[i]->name << endl << "age: " <<  empPointer[i]->age << endl<< "salary: " <<  empPointer[i]->salary << endl<< endl;
    }
    // cleanup
    for (int i = 0; i < 3; i++) {
        delete empPointer[i];
    }
    cout << "===============================LAB 1:========================"<<endl;
    ///==========
    // Lab1:1
    //==========
    Point p1 = Point();
    Point p2 = Point();
    p1.x = 10;
    p1.y = 20;
    p2.x = 50;
    p2.y = 60;
    Point finalVal = multiplieFunction(p1, p2);
    cout <<"x: " <<finalVal.x << "y: " << finalVal.y << endl;
    return 0;
}