// A queue is a data structure that follows the First In, First Out (FIFO) principle. In a queue, elements are added at the rear (enqueue) and removed from the front (dequeue). The element that has been in the queue the longest is the first to be removed.

// Implementation of a Queue :
template <typename T>
class Node
{
    T data;
    Node<T> *next;

public:
    Node(T d) : data(d), next(NULL){};
};

template <typename type>
class Queue
{
    Node<type> *head;
    Node<type> *rare;

public:
    void Enqueue(type value)
    {
        Node<type> *n = new Node(value);

        if (head == NULL)
        {
            this->head = this->rare = n;
        }
        else
        {
            this->rare->next = n;
            this->rare = n;
        }
    }
};