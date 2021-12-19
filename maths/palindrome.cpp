#include <iostream>
using namespace std;

// Function to check a number is palindrome....
bool isPalindrome(int num)
{
    int initial = num;
    bool flag = 0;
    int lastDigit, reverse = 0;

    while (num != 0)
    {
        lastDigit = num % 10;
        reverse = reverse * 10 + lastDigit;
        num = num / 10;
    }

    if (initial == reverse)
        flag = 1;
    return flag;
}

// Driver Body
int main()
{
    int input = 101;
    cout << isPalindrome(input) << endl;
    return 0;
}