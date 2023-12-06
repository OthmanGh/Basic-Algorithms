// A queue is a data structure that follows the First In, First Out (FIFO) principle. In a queue, elements are added at the rear (enqueue) and removed from the front (dequeue). The element that has been in the queue the longest is the first to be removed.

// Implementation of a Queue :

template <typename T>
class Node
{
    T data;
    Node<T> *head;

public:
    Node(T d) : data(d), head(NULL);
};
