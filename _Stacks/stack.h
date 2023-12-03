// Stack is a container in which we can push, pop and see what is present in the top

// Push O(1) add element to the top
// Pop O(1) remove element from the top
// Top O(1) show what is present on the top

// Implementation : can be build using arrays, vectors or linkedList

// Using LinkedList
template <typename T>
class Stack; // forward declaration

template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;

    Node(T d) : data(d){};
};

template <typename T>
class Stack
{
    Node<T> *head;

public:
    // constructor:
    Stack() : head(NULL){};

    // push:
    void push(T data)
    {
        Node<T> *n = new Node<T>(data);
        n->next = head;
        head = n;
    }

    bool empty()
    {
        return head == NULL;
    }

    T top()
    {
        return this->head->data;
    }

    void pop()
    {
        if (head != NULL)
        {
            Node<T> *temp = head;
            head = head->next;
            delete temp;
        }
    }
};