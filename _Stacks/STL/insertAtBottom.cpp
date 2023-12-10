#include <iostream>
#include <stack>

// Challenge: Insert at Stack Bottom
void insertAtBottom(std::stack<int> &s, int data) {}

int main()
{
    std::stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    insertAtBottom(s, 5);

    return 0;
}