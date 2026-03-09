#include "Node.cpp"
#include<iostream>
using namespace std;
class Queues
{
private:
    int data;
    Node *head;
    Node *tail;

public:
    Queues(int value)
    {
        data = value;
        head = nullptr;
        tail = nullptr;
    }

    void Enqueue(int value){
        Node* newNode = new Node(value);
        if(tail == nullptr)
        {
            head = tail = newNode;
        }
        tail->next= newNode;
        tail = newNode;
    }
    void Dequeue(){
        if(head == nullptr){
            cout<<"your Queue is empty"<<endl;
        }
        Node* temp = head;
        head = temp->next;
        delete temp;
    }

    void display(){
        if(head == nullptr){
            cout<<"your Queue is empty"<<endl;
        }
        Node* temp = head;
        int i=0;
        while(temp!=nullptr){
            cout<<"v."<<i<<" "<<temp->data<<endl;
            temp = temp->next;
            i++;
        }
    }
};