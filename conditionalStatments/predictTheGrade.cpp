// Predict the Grade
// Write a program  that reads the marks obtained by a student in 5 subjects and prints the grade of the student based on marks.
// (Note: take the average of the marks obtained by the student to determine the grade)
// if marks are less than 60,  then Grade is D
// if marks are greater than or equal to 60 and less than 70,  then Grade is C
// if marks are greater than or equal to 70 and less than 80,  then Grade is B
// if marks are greater than or equal to 80 and less than 90,  then Grade is A
// if marks are greater than or equal to 90, then Grade is A+

// Input
// 80.5

// Output
// A

// Input
// 50

// Output
// D

#include <iostream>
#include <string>
using namespace std;

float calc_avg(float *marks, int size)
{
    for (size_t i{0}; i < size; i++)
    {
        cout << "Enter your mark for subject " << i + 1 << " : ";
        cin >> marks[i];
    }

    float sum = 0.0;
    for (size_t i{0}; i < size; i++)
    {
        sum += marks[i];
    }

    return sum / float(size);
}

std::string print_grade(float avg)
{
    return (avg >= 90 ? "A+" : (avg >= 80 ? "A" : (avg >= 70 ? "B" : (avg >= 60 ? "C" : ("D")))));
}

int main()
{
    float marks[5]{};
    int len = sizeof(marks) / sizeof(float);

    float mark = calc_avg(marks, len);

    std::string result = print_grade(mark);
    cout << result;

    return 0;
}