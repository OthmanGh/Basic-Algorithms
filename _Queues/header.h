// A queue is a data structure that follows the First In, First Out (FIFO) principle. In a queue, elements are added at the rear (enqueue) and removed from the front (dequeue). The element that has been in the queue the longest is the first to be removed.

// Implementation of a Queue :
template <typename T> // Forward Declaration
class Queue;

template <typename T>
class Node
{
    T data;
    Node *next;

public:
    Node(T d) : data(d), next(NULL){};
    friend class Queue<T>;
};

template <typename T>
class Queue
{
    Node *head;
    Node *rear;

public:
    Queue() : head(NULL), rear(NULL){};
};