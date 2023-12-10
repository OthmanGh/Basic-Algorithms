// Next Greater Element
// Given an array, return the Next Greater Element for every element. The Next greater Element for an element x is the first greater element on the right side of x in the array. Elements for which no greater element exist, consider the next greater element as -1.

// Input Format
// In the function an integer vector is passed

// Output Format
// Return an integer vector containing the next greater element for each element
// Sample Input

// v = { 4, 5, 2, 25 }

// Sample Output
// { 5, 25, 25, -1 }

#include <iostream>
#include <vector>
using namespace std;

vector<int> nextGreaterElement(vector<int> v)
{
    // Your implementation of the nextGreaterElement function goes here
}

int main()
{
    // Test Case 1
    vector<int> v1 = {4, 5, 2, 25};
    vector<int> result1 = nextGreaterElement(v1);
    cout << "Test Case 1: ";
    for (int num : result1)
    {
        cout << num << " ";
    }
    cout << endl;

    // Test Case 2
    vector<int> v2 = {3, 8, 4, 2, 10, 5};
    vector<int> result2 = nextGreaterElement(v2);
    cout << "Test Case 2: ";
    for (int num : result2)
    {
        cout << num << " ";
    }
    cout << endl;

    // Test Case 3
    vector<int> v3 = {1, 2, 3, 4, 5};
    vector<int> result3 = nextGreaterElement(v3);
    cout << "Test Case 3: ";
    for (int num : result3)
    {
        cout << num << " ";
    }
    cout << endl;

    // Test Case 4
    vector<int> v4 = {5, 4, 3, 2, 1};
    vector<int> result4 = nextGreaterElement(v4);
    cout << "Test Case 4: ";
    for (int num : result4)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
