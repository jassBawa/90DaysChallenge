#include <iostream>
using namespace std;

int trailingZeroes(int n)
{
    int fact = 1;
    int result = 0;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << fact << endl;
    while (fact % 10 == 0)
    {
        result++;
        fact = fact / 10;
    }
    return result;
}

int secondWay(int n){
    int res = 0;
    for (int i = 5; i <= n; i=i*5)
    {
        res = res + n/i;
    }
    return res;
}

int main()
{
    int n;
    n = 20;
    // cout << trailingZeroes(n) << endl;
    cout<<secondWay(125)<<endl;
    return 0;
}