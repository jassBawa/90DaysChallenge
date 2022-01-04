#include <iostream>
#include <math.h>
using namespace std;

int ApowerB(int a, int b)
{
    if (b == 0)
        return 1;
    return a * ApowerB(a, b - 1);
}

int main()
{
    cout << ApowerB(2, 10) << endl;
    return 0;
}

/*
    4^3 = 4^2 * 4
    a^b = a^(b-1)*a
*/