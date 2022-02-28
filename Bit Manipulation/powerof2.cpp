#include <iostream>
using namespace std;

bool powerOfTwo(int n)
{
    if (n == 0)
        return 0;
    return !(n & (n - 1));
}

int main()
{
    cout << powerOfTwo(32) <<endl;
    return 0;
}



/*
    if number is power of 2 then number * (number - 1) alwasys equal to zero
    n = 8       ( 1000 )
    n-1 = 7     ( 0111 )
    n & (n-1) = ( 0000 )


    // if not product is always equal to one
    n = 6       ( 0110 )
    n-1 = 5     ( 0101 )
    n & (n-1) = ( 0100 )


*/