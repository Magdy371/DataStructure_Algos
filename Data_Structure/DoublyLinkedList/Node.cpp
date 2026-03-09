#ifndef DOUBLY_NODE_H
#define DOUBLY_NODE_H

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int value)
    {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

#endif
