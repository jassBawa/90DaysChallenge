#include <iostream>
using namespace std;

void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void leftRotateByOne(int arr[], int n, int d)
{
    int temp = arr[0];
    for (int j = 0; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
    arr[n - 1] = temp;
}

void leftRotateAll(int arr[], int n, int d)
{
    for (int i = 0; i < d; i++)
        leftRotateByOne(arr, n, d);
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int temp;
    displayArray(arr, 6);

    int d = 2;

    leftRotateAll(arr, n, d);
   
    displayArray(arr, 6);

    return 0;
}