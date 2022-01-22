#include<iostream>
using namespace std;

bool isAscending(int arr[], int size){
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<arr[i+1]){
            flag = true;
        }
    }
    
    return flag;
}

int main()
{
    int n; cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<isAscending(arr, n)<<endl;


    return 0;
}