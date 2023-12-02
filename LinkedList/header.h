#pragma once

class LinkedList;

class Node // holds data value and a pointer to the next node element
{
    int data;
    Node *next;

public:
    Node(int d) : data(d), next(nullptr){}; // constructor initialization list

    friend LinkedList;
    // method
    int getData();

    // destructor:
    ~Node();
};

int Node::getData()
{
    return this->data;
}

Node::~Node()
{
    if (this->next != nullptr) // this will make a recursive call for the next node
    {
        delete this->next;
    }
    std::cout << "Deleting Node with data " << this->data << " " << std::endl;
}

class LinkedList
{
    Node *head;
    Node *tail;

    // private Methods :
    int searchHelper(Node *start, int key)
    {
        // Base case
        if (start == nullptr)
        {
            return -1;
        }

        // value matches
        if (start->data == key)
        {
            return 0;
        }

        // remaining part of the linked list
        int subIdx = searchHelper(start->next, key);

        return subIdx == -1 ? -1 : subIdx + 1;
    }

public:
    // constructor:
    LinkedList() : head(nullptr), tail(nullptr){};

    // Methods :
    void push_front(int);
    void push_back(int);
    void insert(int data, int pos);
    void pop_front();
    void pop_back();
    void print_list();
    int linear_search(int);
    int recursive_search(int);

    // void remove(pos)
    // destructor :
    ~LinkedList();
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

    if (this->head == nullptr)
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

void LinkedList::insert(int data, int pos)
{
    if (pos == 0)
    {
        push_front(data);
        return;
    }
    // Otherwise:
    Node *temp = head;
    for (int jump = 1; jump < pos; jump++)
    {
        temp = temp->next;
    }

    Node *n = new Node(data);

    n->next = temp->next;
    temp->next = n;
}

void LinkedList::pop_front()
{
    // Check if the list is empty
    if (this->head == nullptr)
    {
        std::cout << "Cannot pop from an empty list." << std::endl;
        return;
    }

    // Check if there is only one element in the list
    if (head->next == nullptr)
    {
        delete this->head;
        this->head = this->tail = nullptr;
        return;
    }

    // Copy head in temporary memory
    Node *temp = this->head;

    // Move head pointer to the next place
    this->head = this->head->next;

    // Make next temp equal to null
    temp->next = nullptr;

    // Delete temp
    delete temp;
}

void LinkedList::pop_back()
{

    if (this->head == nullptr)
    {
        std::cout << "Cannot pop from an empty list." << std::endl;
        return;
    }

    // Check if there is only one element in the list
    if (this->head->next == nullptr)
    {
        delete this->head;
        this->head = this->tail = nullptr;
        return;
    }

    // Traverse the list to find the last element before the tail
    Node *temp = this->head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }

    std::cout << temp->data << std::endl; // Display the value of the last element
    delete temp->next;                    // Deallocate memory for the last element
    temp->next = nullptr;                 // Update the next pointer of the second-to-last element
    this->tail = temp;                    // Update the tail pointer
}

int LinkedList::linear_search(int key)
{
    Node *temp = this->head;
    int idx = 0;

    while (temp != nullptr)
    {
        if (temp->data == key)
        {
            return idx;
        }
        temp = temp->next;
        idx += 1;
    }
    return -1;
}

int LinkedList::recursive_search(int key)
{
    int idx = searchHelper(this->head, key);
    return idx;
}

LinkedList::~LinkedList()
{
    if (this->head != nullptr)
    {
        delete this->head;
        this->head = nullptr;
    }
}

void LinkedList::print_list()
{
    Node *temp = this->head;

    if (temp == nullptr)
    {
        // List is empty :
        std::cout << "List is empty....." << std::endl;
    }
    else
    {
        while (temp != nullptr)
        {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "nullptr" << std::endl;
    }
}