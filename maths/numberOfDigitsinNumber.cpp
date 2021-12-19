
#include<iostream>
#include<math.h>
using namespace std;

int iterative(int n);
int recursive(int n);
int logarithmic(int n);

// Driver Program
int main()
{
    int num=123324344;
    cout<<iterative(num)<<endl;
    cout<<recursive(num)<<endl;
    cout<<logarithmic(num)<<endl;
    return 0;
}


// Iterative solution for number of digits in a number
int iterative(int n){

    int count=0;
    while(n!=0)
    {
        n = n/10;
        count++;
    }
    return count;
}

// Recursive solution for number of digits in a number
int recursive(int n){
    if(n==0)
        return 0;
    return 1 + recursive(n/10);
}

// lograthmic solution for number of digits in a number
int logarithmic(int n){
    return floor(log10(n)+1);
}