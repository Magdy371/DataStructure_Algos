#include "SinglyLinkedList.cpp"
#include <iostream>
using namespace std;

int main()
{
    SinglyLinkedList list = SinglyLinkedList(0);
    list.append(10);
    list.append(20);
    list.append(30);
    list.prepend(5);
    list.display();
    cout << endl;
    list.deleteValue(20);
    list.display();
}
