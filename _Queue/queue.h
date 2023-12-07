// A queue is a data structure that follows the First In, First Out (FIFO) principle. In a queue, elements are added at the rear (enqueue) and removed from the front (dequeue). The element that has been in the queue the longest is the first to be removed.
template <typename T>
class Queue;

template <typename T>
class Node
{
    T data;
    Node<T> *next;

public:
    Node(T d) : data(d), head(nullptr){};
    friend class Queue;
};

template <typename T>
class Queue
{
    Node<T> *head;
    Node<T> *rear;

public:
    Queue() : this->head(nullptr), this->rear(nullptr){};
    void enqueue(T);
    void dequeue();
    T front();
    bool empty();
};

template <typename T>
void Queue<T>::enqueue(T value)
{
    Node<T> new_node = new Node<T>(value);
    if (this->head == nullptr)
    {
        this->head = this->rear = new_node;
    }
    else
    {
        this->rear->next = new_node;
        this->rear = new_node;
    }
};

template <typename T>
void Queue<T>::dequeue()
{
    if (this->head == nullptr)
    {
        std::cout << "Queue is empty..." << std::endl;
    }
    else
    {
        Node<T> *temp = head;
        this->head = head->next;
        temp->next = nullptr;
        delete temp;
    }
};

template <typename T>
T Queue<T>::front()
{
    if (this->head == nullptr)
    {
        std::cout < "Queue is empty...." << std::endl;
        return T();
    }
    else
    {
        return this->head->data;
    }
}

template <typename T>
bool Queue<T>::empty()
{
    return this->head == nullptr;
}