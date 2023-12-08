#include <iostream>
#include <string>
#include "queue.h"

using namespace std;

#include <iostream>
#include <string>

int main()
{
    // Create a queue of integers
    Queue<int> intQueue;

    // Test enqueue with integers
    intQueue.enqueue(10);
    intQueue.enqueue(20);
    intQueue.enqueue(30);

    // Test front and dequeue with integers
    std::cout << "Front element (int): " << intQueue.front() << std::endl;
    intQueue.dequeue();

    // Test empty with integers
    std::cout << "Is the int queue empty? " << (intQueue.empty() ? "Yes" : "No") << std::endl;

    // Test dequeue until empty with integers
    while (!intQueue.empty())
    {
        std::cout << "Front element (int): " << intQueue.front() << std::endl;
        intQueue.dequeue();
    }

    // Try to dequeue from an empty int queue
    intQueue.dequeue();

    // Create a queue of strings
    Queue<std::string> stringQueue;

    // Test enqueue with strings
    stringQueue.enqueue("Hello");
    stringQueue.enqueue("World");
    stringQueue.enqueue("!");

    // Test front and dequeue with strings
    std::cout << "Front element (string): " << stringQueue.front() << std::endl;
    stringQueue.dequeue();

    // Test empty with strings
    std::cout << "Is the string queue empty? " << (stringQueue.empty() ? "Yes" : "No") << std::endl;

    // Test dequeue until empty with strings
    while (!stringQueue.empty())
    {
        std::cout << "Front element (string): " << stringQueue.front() << std::endl;
        stringQueue.dequeue();
    }

    // Try to dequeue from an empty string queue
    stringQueue.dequeue();

    return 0;
}
