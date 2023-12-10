#include <iostream>
#include <stack>

// Reverse a number using stack
// Given a number , write a program to reverse this number using stack.
// Input Format
// In the function an integer is passed
// Output Format
// Return an integer

// Sample Input
// 456

// Sample Output
// 654
using namespace std;

int reverse(int n)
{
    stack<int> s;

    // Push each digit onto the stack
    while (n != 0)
    {
        int last_digit = (n % 10);
        n /= 10;
        s.push(last_digit);
    }

    int reversed_num = 0;
    int i = 1;

    // Pop each digit from the stack and build the reversed number
    while (!s.empty())
    {
        reversed_num += s.top() * i;
        i *= 10;
        s.pop();
    }

    return reversed_num;
};

int main()
{
    int original_number = 456;
    int reversed_number = reverse(original_number);
    cout << "Reversed Number: " << reversed_number << endl;
    return 0;
}