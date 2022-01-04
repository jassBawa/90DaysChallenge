#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int mid, start = 0, end = n;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(int);
    int key = 10;
    int index = binarySearch(arr, size, key);
    cout << index << " " << endl;
    return 0;
}