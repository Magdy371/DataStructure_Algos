# Day 1.1 - C++ Fundamentals Notes

> Beginner-friendly notes covering **Casting, Memory, Pointers, and References**.

***

# 1. Type Casting

Type casting is converting a value from one data type to another.

## A. Implicit Casting (Automatic Conversion)

The compiler automatically converts a smaller type to a larger compatible type.

✅ Usually **no data loss**

### Example

```cpp
int age = 25;
double ageDouble = age;
```

### Diagram

```text
int age = 25
      │
      ▼
double ageDouble = 25.0

No data loss ✅
```

### Common Examples

```cpp
int    -> double
char   -> int
float  -> double
```

***

## B. Explicit Casting (Manual Conversion)

The programmer forces the conversion.

⚠️ May cause **data loss** when converting from a larger type to a smaller type.

### Example

```cpp
double salary = 2334.55667;
int salaryInt = static_cast<int>(salary);
```

Output:

```text
2334.55667 -> 2334
```

### Diagram

```text
double salary
      2334.55667
           │
           ▼
        int
         2334

Decimal part lost ❌
```

### Modern C++ Style

Prefer:

```cpp
int value = static_cast<int>(salary);
```

Instead of:

```cpp
int value = int(salary);
```

***

# 2. Memory Basics

A running program mainly uses two important memory regions:

## Stack Memory

* Smaller size
* Managed automatically
* Stores local variables
* Faster access

### Example

```cpp
int x = 10;
```

```text
STACK
+------+
| x=10 |
+------+
```

***

## Heap Memory

* Much larger than the stack
* Dynamically allocated during runtime
* Programmer is responsible for managing memory

### Example

```cpp
int* ptr = new int(10);
```

```text
STACK                 HEAP
+-------+            +------+
| ptr --|----------->|  10  |
+-------+            +------+
```

***

## Stack vs Heap

```text
+----------------+----------------+
| Stack          | Heap           |
+----------------+----------------+
| Small          | Large          |
| Fast           | Slower         |
| Automatic      | Manual         |
| Local Vars     | Dynamic Data   |
+----------------+----------------+
```

***

# 3. Pointers

A pointer is a variable that stores the memory address of another variable.

## Example

```cpp
int x = 10;
int* ptr = &x;
```

### Diagram

```text
STACK

 x
+----+
| 10 |
+----+

 ptr
+--------+
| Addr X |
+--------+

ptr -----> x
```

### Symbols

#### Address Operator (&)

Gets the memory address.

```cpp
int x = 10;

cout << &x;
```

```text
&x = memory address of x
```

***

#### Dereference Operator (\*)

Accesses the value stored at an address.

```cpp
cout << *ptr;
```

```text
ptr -----> x
            |
            ▼
           10

*ptr = 10
```

***

## Pointer Drawbacks

### 1. Memory Leaks

```cpp
int* p = new int(10);
```

If memory is not released:

```cpp
delete p;
```

memory can leak.

***

### 2. Null Pointer Access

```cpp
int* p = nullptr;
cout << *p;   // Runtime error
```

***

### 3. More Complex Syntax

Pointers require understanding:

```cpp
*
&
new
delete
```

For many situations, references provide a simpler alternative.

***

# 4. References

A reference is an **alias (another name)** for an existing variable.

## Example

```cpp
int x = 10;
int& ref = x;
```

### Diagram

```text
Memory

+----+
| 10 |
+----+
  ▲
  │
 x
  │
  ▼
 ref

Both names refer to the SAME value.
```

***

## Key Characteristics

### A reference must be initialized

✅ Correct

```cpp
int x = 10;
int& ref = x;
```

❌ Wrong

```cpp
int& ref;
```

***

### Changes affect the original variable

```cpp
int x = 10;
int& ref = x;

ref = 20;
```

Result:

```text
x = 20
```

***

# 5. Pass by Value vs Pass by Reference

## Pass by Value

A copy is created.

```cpp
void update(int x)
{
    x = 100;
}
```

### Diagram

```text
Original Variable

x = 10
 │
 ▼
Function receives COPY

x = 10

Changes only the copy.
```

Result:

```text
Original value unchanged ✅
```

***

## Pass by Reference

The function works with the original variable.

```cpp
void update(int& x)
{
    x = 100;
}
```

### Diagram

```text
Original Variable

x = 10
 │
 ▼
Function Reference
 │
 ▼
Same Memory

x = 100
```

Result:

```text
Original value changed ✅
```

***

# 6. Swap Example

## Pass by Value (Fails to Swap)

```cpp
void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
```

### Diagram

```text
Before

x = 5
y = 20

Function receives:

a = 5
b = 20

Swap happens here only

After Function

x = 5
y = 20
```

Original variables remain unchanged.

***

## Pass by Reference (Successful Swap)

```cpp
void swapByReference(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
```

### Diagram

```text
Before

x = 5
y = 20

a ---> x
b ---> y

After Swap

x = 20
y = 5
```

Original variables are modified.

***

# 7. Arrays and References

The statement:

> "References cannot deal with arrays"

is **not completely correct**.

References can reference arrays:

```cpp
int arr[3] = {1, 2, 3};
int (&refArr)[3] = arr;
```

However, arrays are commonly passed using:

### Pointer

```cpp
void print(int* arr, int size)
```

### Reference to Array

```cpp
void print(int (&arr)[3])
```

### Modern C++ (Preferred)

```cpp
std::array<int, 3>
std::vector<int>
```

***

# Day 1 Summary

```text
Casting
├── Implicit Casting
│   └── Usually no data loss
└── Explicit Casting
    └── May lose data

Memory
├── Stack
│   └── Small, Fast, Automatic
└── Heap
    └── Large, Dynamic

Pointers
├── Store addresses
├── Use * and &
└── Can cause runtime issues if misused

References
├── Alias for a variable
├── Easier than pointers
├── Modify original data
└── Great for function parameters

Parameter Passing
├── Pass by Value
│   └── Works on a copy
└── Pass by Reference
    └── Works on the original variable
```

✅ **Key takeaway:** Prefer **pass by reference** when you want a function to modify the original variable and don't need pointer-specific behavior. Modern C++ also favors references and smart pointers over raw pointers whenever possible.
# Day 1.2 - C++ Fundamentals Notes

> Beginner-friendly notes covering **Casting, Memory, Pointers, and References**.

***

# 8. Function Overloading

Function overloading allows multiple functions to have the same name but different parameter lists.

The compiler decides which function to call based on the arguments.

## Example

```cpp
#include <iostream>
using namespace std;

void print(int num)
{
    cout << "Integer: " << num << endl;
}

void print(double num)
{
    cout << "Double: " << num << endl;
}

void print(string text)
{
    cout << "String: " << text << endl;
}
```

Usage:

```cpp
print(10);
print(3.14);
print("Hello");
```

## Diagram

```text
print()

├── print(int)
├── print(double)
└── print(string)

Compiler selects the correct version.
```

### Benefits

✅ Cleaner code

✅ Reuse function names

✅ Improves readability

***

# 9. Arrays

An array is a collection of elements of the same data type stored in contiguous memory locations.

## Static Array

Size is known at compile time.

```cpp
int numbers[5] = {10, 20, 30, 40, 50};
```

### Memory Layout

```text
numbers

Index      Value

[0]  --->   10
[1]  --->   20
[2]  --->   30
[3]  --->   40
[4]  --->   50
```

### Memory Diagram

```text
STACK

+----+----+----+----+----+
|10  |20  |30  |40  |50  |
+----+----+----+----+----+

Contiguous Memory
```

***

## Accessing Elements

```cpp
cout << numbers[0];
cout << numbers[2];
```

Output:

```text
10
30
```

***

# 10. Dynamic Arrays

When the size is not known during compilation, allocate memory dynamically using the heap.

## Example

```cpp
int size = 5;

int* arr = new int[size];
```

### Diagram

```text
STACK                    HEAP

+-------+               +----+----+----+----+----+
| arr --|-------------> | ?  | ?  | ?  | ?  | ?  |
+-------+               +----+----+----+----+----+
```

Assign values:

```cpp
for(int i = 0; i < size; i++)
{
    arr[i] = i * 10;
}
```

Memory:

```text
STACK                    HEAP

+-------+
| arr --|----------------------+
+-------+                      |
                               v

+----+----+----+----+----+
| 0  |10  |20  |30  |40  |
+----+----+----+----+----+
```

Release memory:

```cpp
delete[] arr;
```

⚠️ Forgetting `delete[]` can cause memory leaks.

***

# 11. Array of Pointers

An array can store pointers instead of regular values.

## Example

```cpp
int a = 10;
int b = 20;
int c = 30;

int* ptrs[3] = {&a, &b, &c};
```

## Diagram

```text
STACK

 a=10
 b=20
 c=30

ptrs

+-----+-----+-----+
| &a  | &b  | &c  |
+-----+-----+-----+

   |      |      |
   v      v      v

 +----+ +----+ +----+
 | 10 | | 20 | | 30 |
 +----+ +----+ +----+
```

Access values:

```cpp
cout << *ptrs[0];
cout << *ptrs[1];
cout << *ptrs[2];
```

Output:

```text
10 20 30
```

***

# 12. Two-Dimensional Arrays (2D Arrays)

A 2D array represents rows and columns.

## Example

```cpp
int matrix[3][4] =
{
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9,10,11,12}
};
```

## Visual Representation

```text
       Columns

       0   1   2   3

Row 0  1   2   3   4
Row 1  5   6   7   8
Row 2  9  10  11  12
```

Memory Layout

```text
+--+--+--+--+--+--+--+--+--+--+--+--+
|1 |2 |3 |4 |5 |6 |7 |8 |9 |10|11|12|
+--+--+--+--+--+--+--+--+--+--+--+--+

Stored continuously in memory.
```

***

# 13. Dynamic 2D Array Using Array of Pointers

Each row is allocated separately.

## Example

```cpp
int rows = 3;
int cols = 4;

int** matrix = new int*[rows];

for(int i = 0; i < rows; i++)
{
    matrix[i] = new int[cols];
}
```

## Diagram

```text
STACK

matrix
   |
   v

+------+------+------+
| Row0 | Row1 | Row2 |
+------+------+------+
   |      |      |
   v      v      v
```

Heap:

```text
Row0 --> +----+----+----+----+
          |    |    |    |    |
          +----+----+----+----+

Row1 --> +----+----+----+----+
          |    |    |    |    |
          +----+----+----+----+

Row2 --> +----+----+----+----+
          |    |    |    |    |
          +----+----+----+----+
```

Cleanup:

```cpp
for(int i = 0; i < rows; i++)
{
    delete[] matrix[i];
}

delete[] matrix;
```

***

# 14. Jagged Arrays

A jagged array is a 2D structure where rows can have different lengths.

Unlike a normal 2D array, each row may contain a different number of elements.

## Example

```cpp
int* jagged[3];

jagged[0] = new int[2];
jagged[1] = new int[4];
jagged[2] = new int[3];
```

## Diagram

```text
jagged

+------+------+------+
| Row0 | Row1 | Row2 |
+------+------+------+
   |      |      |
   v      v      v

+----+----+
|    |    |
+----+----+

+----+----+----+----+
|    |    |    |    |
+----+----+----+----+

+----+----+----+
|    |    |    |
+----+----+----+
```

Notice that every row has a different size.

***

# 15. Modern C++ Alternative (Recommended)

Instead of managing memory manually using `new` and `delete`, Modern C++ prefers STL containers.

## Vector

```cpp
#include <vector>

vector<int> numbers = {1,2,3,4,5};
```

## 2D Vector

```cpp
vector<vector<int>> matrix =
{
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
```

## Jagged Vector

```cpp
vector<vector<int>> jagged =
{
    {1,2},
    {3,4,5,6},
    {7,8,9}
};
```

### Visual

```text
[
  [1,2],
  [3,4,5,6],
  [7,8,9]
]
```

✅ Automatic memory management

✅ Safer than raw pointers

✅ Preferred in modern C++

***

# Quick Memory Map

```text
PROGRAM MEMORY

+----------------------------------+
|            STACK                 |
|----------------------------------|
| x                                |
| ptr                              |
| references                       |
| local arrays                     |
+----------------------------------+
                |
                |
                v
+----------------------------------+
|             HEAP                 |
|----------------------------------|
| dynamic arrays                   |
| dynamic objects                  |
| dynamic 2D arrays                |
| jagged arrays                    |
+----------------------------------+
```

### Day 1 Topics Covered

```text
C++ Fundamentals
│
├── Casting
│   ├── Implicit Casting
│   └── Explicit Casting
│
├── Memory
│   ├── Stack
│   └── Heap
│
├── Pointers
│   ├── Address Operator (&)
│   ├── Dereference Operator (*)
│   └── Memory Allocation
│
├── References
│   ├── Alias
│   └── Pass by Reference
│
├── Functions
│   └── Function Overloading
│
├── Arrays
│   ├── Static Arrays
│   ├── Dynamic Arrays
│   ├── Array of Pointers
│   ├── 2D Arrays
│   └── Jagged Arrays
│
└── Modern C++
    ├── std::array
    └── std::vector
```

**Key Takeaway:** Learn raw pointers and dynamic allocation to understand how memory works, but prefer `std::vector`, `std::array`, references, and RAII-based containers in modern C++ code.
