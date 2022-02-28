// Find out the number of ones in a binary number

#include <iostream>
using namespace std;

int numberOfOnes(int n)
{
    int count = 0;
    while (n != 0)
    {
        // it will set the bit to zero..
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    cout << numberOfOnes(16) << endl;
    return 0;
}

/*
    logic:
    n = 19            ( 10011 )
    n-1 = 18          ( 10010 )
    n & (n-1) = 18    ( 10010 )        // here 1 got changed into 0 and we incremented our count variable

    // update the n and restart the same process till n is not equal to zero
    n = 18            ( 10010 )
    n-1 = 17          ( 10001 )
    n & (n-1) = 16    ( 10000 )
    // count becomes 2

    n = 16            ( 10000 )
    n-1 = 15          ( 01111 )
    n & (n-1) = 16    ( 00000 )
    // count becomes 3
    and we return from the function as n becomes zero

*/