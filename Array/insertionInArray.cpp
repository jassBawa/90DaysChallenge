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

    // insertion
    // where to insert the element
    int k = 2;  
    int element = 60;
    // for (int i = upperBound-1; i >= k; i--)
    // {
    //     if(i == k){
    //         arr[i+1] = arr[i];
    //         arr[i] = element;
    //         upperBound++;
    //         break;
    //     }
    //     arr[i+1] = arr[i];
    // }
    // cout<<upperBound << endl;

    // method 2
    for (int i = upperBound; i >= k; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[k] = element;
    upperBound++;
    

    // display array
      displayArray(arr, upperBound);
    // cout<<upperBound << endl;


    
    return 0;
}