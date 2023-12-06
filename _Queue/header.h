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

template <typename T>
class Queue
{
    Node<T> *head;
    Node<T> *rare;

public:
    void enqueue(type value)
    {
        Node<T> *n = new Node(value);

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

    bool empty()
    {
        return this->head == NULL;
    }

    T front()
    {
        if (this->empty())
        {
            cout << "Queue is empty....";
            return;
        }

        return this->head->data;
    }
};