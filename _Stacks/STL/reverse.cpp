#include <iostream>
#include <stack>

using namespace std;

void insertAtBottom(stack<int> &s, int data)
{
    if (s.empty())
    {
        s.push(data);
        return;
    }

    int temp = s.top();
    s.pop();

    insertAtBottom(s, data);
    s.push(temp);
}

// Challenge: Reverse the Stack
void reverse(stack<int> &s)
{

    if (s.empty())
    {
        return;
    }

    int t = s.top();
    s.pop();
    reverse(s);           // reverse smaller stack
    insertAtBottom(s, t); // insert top at the bottom of the stack
}

int main()
{
    std::stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    reverse(s);

    while (!s.empty())
    {
        std::cout << s.top() << std::endl;
        s.pop();
    }
    return 0;
}