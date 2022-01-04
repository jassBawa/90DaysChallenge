#include<iostream>
using namespace std;

// Program to print Hello World n times using recursion
void Recursion(int n){
    if(n==0)
        return;
    cout<<"Hello World"<<endl;
    Recursion(n-1);
}

int main()
{
    Recursion(21);
    return 0;
}