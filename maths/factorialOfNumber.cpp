#include<iostream>
using namespace std;

int iterative(int number);
int recursive(int number);


// Driver program
int main()
{
    cout<<iterative(5)<<endl;
    cout<<recursive(5)<<endl;
    return 0;
}


// iterative way of calculating the factorial of a number
int iterative(int number){

    int fact= 1;
    for(int i=2; i<=number;i++)
    {
        fact = fact*i;
    }
    return fact;
}

// recursive way of calculating the factorial of a number
int recursive(int number){
    if(number==0)
        return 1;
    return number*recursive(number-1);
}