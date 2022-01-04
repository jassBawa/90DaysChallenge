#include<iostream>
using namespace std;

// Finding sum of n natural number using recursion
int sumOfNumber(int num)
{
    if(num==0)
        return 0;
    return num+sumOfNumber(num-1);
}

int main()
{
    cout<<sumOfNumber(20)<<endl;
    return 0;
}