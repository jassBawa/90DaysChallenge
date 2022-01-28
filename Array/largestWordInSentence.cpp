#include <iostream>
using namespace std;

int main()
{
    // largest word in sentence
    int n;
    cin >> n;
    // cin.ignore();

    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int currLnt = 0;
    int maxLen = 0;

    while (1)
    {

        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currLnt > maxLen)
            {
                maxLen = currLnt;
            }
            currLnt = 0;
        }
        else
        {
            currLnt++;
        }

        if (arr[i] == '\0')
        {
            break;
        }
        ++i;
    }
    cout << maxLen << endl;

    return 0;
}