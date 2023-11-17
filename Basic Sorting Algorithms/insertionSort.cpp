#include <iostream>
using namespace std;

void print(int *arr, int size)
{
    for (size_t i{0}; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        int prev = i - 1;
        int current = i;

        while (prev >= 0 && arr[current] < arr[prev])
        {
            int temp = arr[current];

            arr[current] = arr[prev];
            arr[prev] = temp;

            prev--;
            current--;
        }
    }
}

int main()
{
    int arr[]{-2, 3, 4, 10, 14, 1000, -120, 12, -1, 5, -5, 6, 1, 3};

    int len = sizeof(arr) / sizeof(int);

    insertionSort(arr, len);

    print(arr, len);
    return 0;
}