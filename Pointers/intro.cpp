#include<iostream>
using namespace std;

int main()
{
    // intilazing
    int a = 10;
    int* aptr = &a;

    // knowing about the memmory location
    cout<<aptr<<endl;
    aptr++;
    cout<<aptr<<endl;    

    // output is in hexadecimal numbers

    // char pointer
    char ch = 'a';
    char* cptr = &ch;

    cout<<cptr<<endl;
    cptr++;
    cout<<cptr<<endl;
    return 0;
}