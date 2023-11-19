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

// find the minimum element from unsorted part and putting it at the beginning
void selectionSort(int *arr, int size)
{
    for (size_t pos{0}; pos < size - 1; pos++)
    {
        int current_el = arr[pos];
        int j = pos;
        int min_idx = pos;

        while (j < size)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
            j++;
        }

        int temp = current_el;
        arr[pos] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int main()
{
    int arr[]{5, 4, 3, 2, 1};

    int len = sizeof(arr) / sizeof(int);

    selectionSort(arr, len);

    print(arr, len);
    return 0;
}