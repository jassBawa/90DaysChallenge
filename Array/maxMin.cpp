#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int min,max;
    min = INT_MAX;
    max = INT_MIN;

    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]>max)
            max = arr[i];
        if(arr[i]<min)
            min = arr[i];
    }
    cout<<max<<" "<<min<<endl;
    return 0;
}