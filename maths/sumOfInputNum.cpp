#include <iostream>
using namespace std;

int main()
{

    int t; // test cases
    cin >> t;
    while (t > 0)
    {
        int num;
        int sum = 0;
        cin >> num;
        while (num > 0)
        {
            sum += num % 10;
            num = num / 10;
        }
        cout << sum << endl;
        t--;
    }
    return 0;
}