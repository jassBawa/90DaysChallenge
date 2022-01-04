#include <iostream>
using namespace std;

void printArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;       
}

int insertNum(int arr[], int totalsize, int usedSize, int element, int index){
    if(index > totalsize || usedSize >= totalsize)
        return -1;
    
    for (int i = usedSize-1; i>= index ; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}


int main()
{
    int arr[50] = {1, 4, 234, 2, 45};
    int element = 69, totalsize = 50, usedSize = 5;
    int index = 2;          // index at which the element to be inserted

    printArr(arr, usedSize);
    insertNum(arr, totalsize, usedSize, element, index);
    usedSize++;
    // cout<<"Used Size is \n";
    printArr(arr, usedSize);
    return 0;
}



