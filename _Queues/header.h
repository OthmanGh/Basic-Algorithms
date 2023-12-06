// A queue is a data structure that follows the First In, First Out (FIFO) principle. In a queue, elements are added at the rear (enqueue) and removed from the front (dequeue). The element that has been in the queue the longest is the first to be removed.

// Implementation of a Queue :

template <typename T> // Forward Declaration
class Queue;

template <typename T>
class Node
{
    T data;
    Node<T> *next;

public:
    Node(T d) : data(d), next(NULL){};
    friend class Queue<T>;
};

template <typename T>
class Queue
{
    Node<T> *head;
    Node<T> *rear;

public:
    void enqueue(T value)
    {
        Node<T> *n = new Node(value);

        if (head == NULL)
        {
            this->head = this->rear = n;
        }
        else
        {
            this->rear->next = n;
            this->rear = n;
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
            std::cout << "Queue is empty....";
            return T();
        }

        return this->head->data;
    }

    void dequeue()
    {
        if (this->empty())
        {
            std::cout << "Queue is empty....";
        }
        else
        {
            Node<T> *temp = this->head;
            this->head = this->head->next;
            temp->next = NULL;
            delete temp;
        }
    }
};