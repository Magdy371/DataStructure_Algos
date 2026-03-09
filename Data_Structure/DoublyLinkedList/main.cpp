#include "DoublyLinkedList.cpp"
#include <iostream>
using namespace std;

int main()
{
    DoublyLinkedList list = DoublyLinkedList(0);
    list.append(10);
    list.append(20);
    list.append(30);
    list.prepend(5);

    list.displayForward();
    cout << endl;
    list.displayBackward();
    cout << endl;

    list.deleteValue(20);
    list.displayForward();
}
