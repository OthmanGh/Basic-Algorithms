#include <iostream>
#include <stdexcept>
#include "stackVec.h"
using namespace std;

int main()
{
    Stack<char> myStack;
    myStack.push('o');
    myStack.push('t');
    myStack.push('h');
    myStack.push('m');
    myStack.push('a');
    myStack.push('n');

    while (!myStack.empty())
    {
        cout << myStack.top() << " -> ";
        myStack.pop();
    }
}