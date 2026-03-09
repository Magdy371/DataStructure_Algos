#include "Node.cpp"
#include <iostream>
using namespace std;

class DoublyLinkedList
{
private:
    int data;
    Node *head;
    Node *tail;

public:
    DoublyLinkedList(int value)
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
        newNode->prev = tail;
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
        head->prev = newNode;
        head = newNode;
    }

    void deleteValue(int value)
    {
        if (head == nullptr)
        {
            cout << "your Linked List is empty" << endl;
            return;
        }

        Node *current = head;
        while (current != nullptr && current->data != value)
        {
            current = current->next;
        }

        if (current == nullptr)
        {
            cout << "value not found" << endl;
            return;
        }

        if (current == head)
        {
            head = current->next;
            if (head != nullptr)
            {
                head->prev = nullptr;
            }
            else
            {
                tail = nullptr;
            }
            delete current;
            return;
        }

        if (current == tail)
        {
            tail = current->prev;
            tail->next = nullptr;
            delete current;
            return;
        }

        current->prev->next = current->next;
        current->next->prev = current->prev;
        delete current;
    }

    void displayForward()
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

    void displayBackward()
    {
        if (tail == nullptr)
        {
            cout << "your Linked List is empty" << endl;
            return;
        }
        Node *temp = tail;
        int i = 0;
        while (temp != nullptr)
        {
            cout << "v." << i << " " << temp->data << endl;
            temp = temp->prev;
            i++;
        }
    }
};
