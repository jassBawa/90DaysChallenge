#include<iostream>
using namespace std;

int main()
{
     int n,m; cin>>n>>m;
    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
        
    }

    int row_start=0,
        row_end=n-1,
        column_start=0,
        column_end=m-1;
    
    while(row_start <= row_end && column_start <= column_end){
        
         // printing first row_start
            for (int i = column_start; i < column_end; i++)
            {
                cout<<mat[row_start][i]<< " ";
            }
            row_start++;

        //  printing last col
            for (int i = row_start; i < row_end; i++)
            {
                cout<<mat[i][column_end]<<" ";
            }
            column_end--;


        // printing last row_start
            for (int i = column_end; i < column_start; i++)
            {
                cout<<mat[row_end][i]<< " ";
            }
            row_end--;
            
            
         //  printing first col
            for (int i = row_end; i < row_start; i++)
            {
                cout<<mat[i][column_start]<<" ";
            }
            column_start++;

    

    }





    return 0;
}