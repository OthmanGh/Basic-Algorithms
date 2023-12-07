#include <iostream>
#include <string>
#include "queue.h"

using namespace std;

int main()
{
    Queue<string> students_queue;

    students_queue.enqueue("Jack");
    students_queue.enqueue("David");
    students_queue.enqueue("Chris");
    students_queue.enqueue("Vincent");

    cout << "Students in Queue : ";
    while (!students_queue.empty())
    {
        cout << students_queue.front() << " -> ";
        students_queue.dequeue();
    }

    return 0;
}