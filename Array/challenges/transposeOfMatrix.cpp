#include <iostream>
using namespace std;

int main()
{
    int r=3, c = 3;
    int arr[3][3] = {
        {1, 2, 3},
        {4, 75, 6},
        {7, 80, 9},
    };

    // transpose array
    for (int i = 0; i < 3; i++)
    {
        // j = i to only change the upper triangle elements
        for (int j = i; j < 3; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }


    // print array
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}