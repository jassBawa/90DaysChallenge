#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr,n);
    reverseArray(arr, n);
    printArray(arr,n);

    return 0;
}

/*
    1 2 3 4 5 6 7
    7 2 3 4 5 6 1
    7 6 3 4 5 2 1
    7 6 5 4 3 2 1
    7 6 5 4 3 2 1

*/