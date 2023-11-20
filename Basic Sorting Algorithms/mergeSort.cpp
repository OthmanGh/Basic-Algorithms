#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int s, int e)
{
    int i = s;
    int m = (s + e) / 2;
    int j = m + 1;
    vector<int> temp;

    while (i <= m && j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // copy rem elements from first array
    while (i <= m)
    {
        temp.push_back(arr[i++]);
    }

    // or copy remaining elements from second array
    while (j <= e)
    {
        temp.push_back(arr[j++]);
    }

    // out of these only 1 loop will work

    // copy back the elements from temp to original array

    int k = 0;
    for (int index = s; index <= e; index++)
    {
        arr[index] = temp[k++];
    }
    return;
}

void mergeSort(vector<int> &arr, int s, int e)
{
    // Base Cae :
    if (s >= e)
    {
        return;
    }

    // recursive case
    int mid = (s + e) / 2;

    mergeSort(arr, s, mid);     // left part of Array
    mergeSort(arr, mid + 1, e); // right part of Array

    return merge(arr, s, e);
}

int main()
{

    vector<int> arr{12, 49, -23, 50, 23, -2, 1, 0, 4, 5, 64, -34};
    int s = 0;
    int e = arr.size() - 1;
    mergeSort(arr, s, e);

    for (int x : arr)
    {
        cout << x << ", ";
    }
}