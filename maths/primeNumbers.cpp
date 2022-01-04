#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num)
{
    int number = sqrt(num);
    cout<<"sqrt is "<< number<<endl;
    for (int i = 2; i <= number; i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int num = 121;
    cout << isPrime(5) << endl;
    return 0;
}