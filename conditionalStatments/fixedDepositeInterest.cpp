// Fixed Deposit Interest
// WAP a program that calculates simple interest on Fixed Deposits based on certain conditions.

// i) Tenure (t) = 1 year - 2 years
// Rate of interest (r)=5.00% (fixed)
// ii) Tenure (t) = 3 or more than 3 years
// Rate of interest (r)=6.00% (fixed)
// Your program should read two integers Principal Amount (p), Tenure(t) as the input and print the simple interest obtained on the amount at the end of tenure.

// Input
// 100 1

// Output
// 5

// Input
// 50000 4

// Output
// 12000

#include <iostream>
using namespace std;

float calc_simple_interest(int p, int t)
{
    return (t <= 2) ? 0.05 : 0.06 * float(p) * t;
}

int main()
{
    int t, p;
    cout << "Enter Principal Amount (p) : ";
    cin >> p;

    cout << "Enter Tenure (t) : ";
    cin >> t;

    float simple_interest = calc_simple_interest(p, t);

    cout << "Simple interest obtained : " << simple_interest;
    return 0;
}
