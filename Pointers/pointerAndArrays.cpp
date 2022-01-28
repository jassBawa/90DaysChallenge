#include<iostream>
using namespace std;

int main()
{
    int arr[] = {10,20,30};

    // arr stores the address of first index and arr address can't be changed
    cout<<*arr<<endl;

    int* ptr = arr;
    for (int i = 0; i < 3; i++)
    {
        // cout<<*arr<<endl;
        // arr++;   is illegal

        cout<<*ptr<<endl;
        ptr++;
                // or
        cout<<*(arr+i)<<endl;

    }
    
    return 0;
}