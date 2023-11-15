// Odd or Even Number
// Read a number N and print whether it is odd or even.

// (Note: you should print the answer in lowercase letters)

// Input

// 2

// Output
// even

// Input

// 3

// Output
// odd

// Solution :

#include <iostream>
#include <string>

std::string oddOrEven(int num)
{
    return (num % 2 == 0) ? "even" : "odd";
}

int main()
{
    int number{0};
    std::cout << "Enter a number : ";
    std::cin >> number;

    auto result = oddOrEven(number);
    std::cout << number << " " << result << " number ";

    return 0;
}