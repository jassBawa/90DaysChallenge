#include <iostream>
using namespace std;

void printArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;       
}

int deleteNum(int arr[], int usedSize, int index){
    if(index >= usedSize)
        return -1;

    for (int i = index ; i < usedSize ; i++)
    {
        arr[i] = arr[i+1];
    }
    return 1;
}


int main()
{
    int arr[50] = {1, 4, 234, 2, 45};
    int element = 69, totalsize = 50, usedSize = 5;
    int index = 0;          // index at which deletion is to be performed

    printArr(arr, usedSize);
    deleteNum(arr, usedSize, index);
    usedSize--;
    printArr(arr, usedSize);
    return 0;
}



