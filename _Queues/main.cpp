#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    cout << "Starting the main function." << endl;

    // Testing with integers
    Queue<int> intQueue;
    intQueue.enqueue(10);
    intQueue.enqueue(20);
    intQueue.enqueue(30);

    cout << "Front: " << intQueue.front() << endl;

    intQueue.dequeue();
    cout << "Front after dequeue: " << intQueue.front() << endl;

    // Testing with strings
    Queue<string> stringQueue;
    stringQueue.enqueue("apple");
    stringQueue.enqueue("banana");
    stringQueue.enqueue("cherry");

    cout << "Front: " << stringQueue.front() << endl;

    stringQueue.dequeue();
    cout << "Front after dequeue: " << stringQueue.front() << endl;

    cout << "Exiting the main function." << endl;

    return 0;
}
