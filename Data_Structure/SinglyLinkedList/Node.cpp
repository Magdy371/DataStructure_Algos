#ifndef SINGLY_NODE_H
#define SINGLY_NODE_H

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

#endif
