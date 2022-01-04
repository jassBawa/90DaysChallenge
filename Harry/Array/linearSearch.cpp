#include<iostream>
using namespace std;

int linearSearch( int arr[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,23,4,5,2,45,64,24,254};
    int size = sizeof(arr)/sizeof(int);
    int key = 254;
    int index = linearSearch(arr, size, key);
    cout<<index<<" "<<endl;
    return 0;
}