#include "Node.cpp"
#include <iostream>
using namespace std;

class SinglyLinkedList
{
private:
    int data;
    Node *head;
    Node *tail;

public:
    SinglyLinkedList(int value)
    {
        data = value;
        head = nullptr;
        tail = nullptr;
    }

    void append(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void prepend(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void deleteValue(int value)
    {
        if (head == nullptr)
        {
            cout << "your Linked List is empty" << endl;
            return;
        }

        if (head->data == value)
        {
            Node *temp = head;
            head = head->next;
            if (head == nullptr)
            {
                tail = nullptr;
            }
            delete temp;
            return;
        }

        Node *current = head;
        while (current->next != nullptr && current->next->data != value)
        {
            current = current->next;
        }

        if (current->next == nullptr)
        {
            cout << "value not found" << endl;
            return;
        }

        Node *temp = current->next;
        current->next = temp->next;
        if (temp == tail)
        {
            tail = current;
        }
        delete temp;
    }

    void display()
    {
        if (head == nullptr)
        {
            cout << "your Linked List is empty" << endl;
            return;
        }
        Node *temp = head;
        int i = 0;
        while (temp != nullptr)
        {
            cout << "v." << i << " " << temp->data << endl;
            temp = temp->next;
            i++;
        }
    }
};
