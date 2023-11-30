#pragma once

class LinkedList;

class Node // holds data value and a pointer to the next node element
{
    int data;
    Node *next;

public:
    Node(int d) : data(d), next(nullptr){}; // constructor initialization list

    int getData();
    friend LinkedList;
};

int Node::getData()
{
    return this->data;
}

class LinkedList
{
    Node *head;
    Node *tail;

public:
    // constructor:
    LinkedList() : head(nullptr), tail(nullptr){};

    // Methods :
    void push_front(int);
    void push_back(int);
};

void LinkedList::push_front(int value)
{
    Node *n = new Node(value);
    if (this->head == nullptr)
    {
        // If the list is empty, set both head and tail to the new node
        this->head = n;
        this->tail = n;
    }
    else
    {
        // If the list is not empty, update the pointers to insert at the front
        n->next = this->head;
        this->head = n;
    }
}

void LinkedList::push_back(int value)
{
    Node *n = new Node(value);

    if (this->head = nullptr)
    {
        // If the list is empty, set both head and tail to the new node
        this->head = this->tail = n;
    }
    else
    {
        // If the list is not empty, update the pointers to insert at the back
        this->tail->next = n;
        this->tail = n;
    }
}
