#include<iostream>
using namespace std;

int uniqueNumber( int arr[], int n){
    int xorSum=0;
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum ^ arr[i];
    }
    return xorSum;   
}

int main()
{
    int arr[] = {1, 2, 3, 4, 1, 2, 3};
    int size = 7;
    cout<< uniqueNumber(arr, size) << endl;
    return 0;
}


/*
     1 ^ 2 ^ 3 ^ 4 ^ 1 ^ 2 ^ 3
     repeated elements will make a cancel out effect and we will be left with only unique element
     === 4

     time complexity = O(n)
*/