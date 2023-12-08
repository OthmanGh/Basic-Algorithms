#pragma once

template <typename T>
class LinkedList;

template <typename T>
class Node // holds data value and a pointer to the next node element
{
    T data;
    Node<T> *next;

public:
    Node(T d) : data(d), next(nullptr){}; // constructor initialization list

    // method
    T getData();
    // destructor:
    ~Node();
    friend class LinkedList<T>;
};

template <typename T>
T Node<T>::getData()
{
    return this->data;
}

template <typename T>
Node<T>::~Node()
{
    if (this->next != nullptr) // this will make a recursive call for the next node
    {
        delete this->next;
    }
    std::cout << "Deleting Node with data " << this->data << " " << std::endl;
}

template <typename T>
class LinkedList
{
    Node<T> *head;
    Node<T> *tail;

    // private Methods :
    T search_helper(Node<T> *start, T key);

public:
    // constructor:
    LinkedList() : head(nullptr), tail(nullptr){};

    // Methods :
    void push_front(T);
    void push_back(T);
    void insert(T, int);
    void pop_front();
    void pop_back();
    void remove(int);
    void print_list();
    T linear_search(T);
    T recursive_search(T);

    // destructor :
    ~LinkedList();
};

template <typename T>
void LinkedList<T>::push_front(T value)
{
    Node<T> *n = new Node<T>(value);
    if (this->head == nullptr)
    {
        // If the list is empty, set both head and tail to the new node
        this->head = this->tail = n;
    }
    else
    {
        // If the list is not empty, update the pointers to insert at the front
        n->next = this->head;
        this->head = n;
    }
}

template <typename T>
void LinkedList<T>::push_back(T value)
{
    Node<T> *n = new Node<T>(value);

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
template <typename T>
void LinkedList<T>::insert(T data, int pos)
{
    if (pos == 0)
    {
        push_front(data);
        return;
    }
    // Otherwise:
    Node<T> *temp = head;
    for (int jump = 1; jump < pos; jump++)
    {
        if (temp == nullptr)
        {
            std::cout << "Invalid position." << std::endl;
            return;
        }

        temp = temp->next;
    }

    Node<T> *n = new Node<T>(data);

    n->next = temp->next;
    temp->next = n;
}

template <typename T>
void LinkedList<T>::pop_front()
{
    // Check if list is empty
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
    Node<T> *temp = this->head;

    // Move head pointer to the next place
    this->head = this->head->next;

    // Make next temp equal to null
    temp->next = nullptr;

    // Delete temp
    delete temp;
}

template <typename T>
void LinkedList<T>::pop_back()
{
    // Check if the list is empty
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
    Node<T> *temp = this->head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }

    // std::cout << temp->data << std::endl; // Display the value of the last element
    delete temp->next;    // Deallocate memory for the last element
    temp->next = nullptr; // Update the next pointer of the second-to-last element
    this->tail = temp;    // Update the tail pointer
}

template <typename T>
void LinkedList<T>::remove(int pos)
{
    // Check if list is empty
    if (this->head == nullptr)
    {
        std::cout << "Cannot remove from an empty list." << std::endl;
        return;
    }

    if (pos == 0)
    {
        pop_front();
        return;
    }

    // Traverse the list to find last element before pos
    Node<T> *temp = this->head;
    int cnt = 0;
    while (cnt < pos - 1)
    {
        if (temp == nullptr || temp->next == nullptr)
        {
            std::cout << "Invalid position." << std::endl;
            return;
        }

        temp = temp->next;
        cnt++;
    }
    Node<T> *removedNode = temp->next; // Store the node to be removed, to avoid memory leak
    temp->next = temp->next->next;     // Adjust the pointers to remove the node from the list
    removedNode->next = nullptr;       // Set the next pointer of removedNode to null (disconnect from the list)
    delete removedNode;                // delete removedNode to free up the memory
}

template <typename T>
T LinkedList<T>::linear_search(T key)
{
    Node<T> *temp = this->head;
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

template <typename T>
T LinkedList<T>::recursive_search(T key)
{
    int idx = search_helper(this->head, key);
    return idx;
}

template <typename T>
T LinkedList<T>::search_helper(Node<T> *start, T key)
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
    int subIdx = search_helper(start->next, key);

    return subIdx == -1 ? -1 : subIdx + 1;
}

template <typename T>
LinkedList<T>::~LinkedList()
{
    if (this->head != nullptr)
    {
        delete this->head;
        this->head = nullptr;
    }
}

template <typename T>
void LinkedList<T>::print_list()
{
    Node<T> *temp = this->head;

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