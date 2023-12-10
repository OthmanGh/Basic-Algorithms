#include <iostream>
#include <stack>

using namespace std;
// Challenge: Reverse the Stack
void reverse(stack<int> &s) {}

int main()
{
    std::stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    while (!s.empty())
    {
        std::cout << s.top() << std::endl;
        s.pop();
    }
    return 0;
}