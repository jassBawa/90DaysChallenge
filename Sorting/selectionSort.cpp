#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    // selection sorting
    int temp= -199;
    for (int i = 0; i < n-1; i++)
    {
        // for i = 0, j=1 
        // if j(1)>i(0)
        for (int j = 1+i; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[j];
                arr[j]= arr[i];
                arr[i] = temp;
            }
            
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}