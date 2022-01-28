#include<iostream>
using namespace std;

int main()
{
    char arr[100]= "apple";
    
    int i = 0;

    while (arr[i] != '\0')
    {
        cout<<arr[i]<<endl;
        i++;
    }
    

    char cr[10];
    cin>>cr;

    cout<<cr<<endl;
    cout<<cr[1]<<endl;
    return 0;
}