#include<iostream>
using namespace std;

int main()
{
    int n,m; cin>>n>>m;
    int target; cin>>target;
    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
        
    }

    // going to top right position
    int r=0, c= m-1;
    bool found = false;

    // main logic
    while(r < n and c >= 0)                 
    {
        if(mat[r][c]==target){
            found = true;
            break;
        }
        else if (mat[r][c] > target)
        {
            // if element is greater than target we move to previous coln
            c--;
        }
        else{
            r++;
        }
            
    }   
    
    if (found)
    {
        cout<<"Element Found"<<endl;
    }
    else{
        cout<< "Element Not found"<<endl;
    }
    



    return 0;
}