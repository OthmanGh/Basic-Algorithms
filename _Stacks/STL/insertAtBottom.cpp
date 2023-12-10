#include <iostream>
#include <stack>

// Challenge: Insert at Stack Bottom
void insertAtBottom(std::stack<int> &s, int data)
{
    // Base Case :
    if (s.empty())
    {
        s.push(data);
        return;
    }

    int temp = s.top();
    s.pop();
    // recursive case :
    insertAtBottom(s, data);
    s.push(temp);
}

int main()
{
    std::stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    insertAtBottom(s, 5);

    while (!s.empty())
    {
        std::cout << s.top() << std::endl;
        s.pop();
    }
    return 0;
}