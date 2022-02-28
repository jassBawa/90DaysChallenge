#include<iostream>
using namespace std;

void displayArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{

    int arr[60] = {1, 2, 3, 4, 5, 6};
    int upperBound = 6;

    displayArray(arr, upperBound);

    // index to be deleted
    int k = 2;

    // deletion in array
    for (int i = k; i < upperBound; i++)
    {
        arr[i] = arr[i+1];
    }
    upperBound--;

    displayArray(arr, upperBound);

    
    
    return 0;
}