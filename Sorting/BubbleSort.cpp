#include <iostream>
using namespace std;

// time complextitiy = 0(n^2)


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Bubble sort

    // 43 2 40 30 15
    // 2 43 40 30 15
    // 2 40 43 30 15
    // 2 40 30 43 15
    // 2 40 30 15 43

    // 2 40 30 15 43
    // 2 30 40 15 43
    // 2 30 15 40 43
    // 2 30 15 40 43

    // 2 30 15 40 43
    // 2 15 30 40 43
    // 2 15 30 40 43

    // 2 15 30 40 43
    // 2 15 30 40 43

    // n = 5;
    // n -1 = 4
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n; j++)
        {
            // swaping elements
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }


    // displaying array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}