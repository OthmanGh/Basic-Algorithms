#pragma once

class Node
{
    int data;
    Node *next;

public:
    Node(int d) : data(d), next(nullptr){};

    int getData();
};

int Node::getData()
{
    return this->data;
}