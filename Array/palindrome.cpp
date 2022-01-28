#include<iostream>
using namespace std;

int main()
{
    // check palindrome

    int n;
    cin>>n;
    char arr[n];
    cin>>arr;

    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=arr[n-1-i])
        {
            flag = false;
            break;
        }
        
    }
    if(flag){
        cout<<"word is palindrome"<<endl;
    }
    else{
        cout<<"word is not palindrome"<<endl;
    }
    return 0;
}