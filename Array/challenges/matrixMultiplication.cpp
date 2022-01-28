#include <iostream>
using namespace std;



int main()
{
    int r = 3, c = 3;
    int n1[3][3] = {
        {1, 2, 3},
        {4, 75, 6},
        {7, 80, 9},
    };
    int n2[3][3] = {
        {1, 2, 3},
        {4, 75, 6},
        {7, 80, 9},
    };

    int n3[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            n3[i][j] = 0;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                n3[i][j] +=   n1[i][k]* n2[k][j];
            }
        }
    }

    // print array
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << n3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}