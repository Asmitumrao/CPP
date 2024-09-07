#include<bits/stdc++.h>
using namespace std;


bool isSafe(int**arr, int x, int y , int n)
{

    // checking above rows
    for(int row=0; row<x; row++)
    {
        if(arr[row][y] == 1)
            return false;
    }

    // upper left digonal check
    int row=x;
    int col=y;
    while(col>=0 && row >=0 )
    {
        if(arr[row][col]==1)
            return false;
        col--;
        row--;
    }

    // upper right digonal check
    row=x;
    col=y;
    while(col<n && row>=0 )
    {
        if(arr[row][col]==1)
            return false;
        col++;
        row--;
    }
    return true;
}

bool n_Queens(int ** arr, int x, int n)
{
    if(x>=n)
        return true;
    for(int col=0; col<n; col++)
    {
        if(isSafe(arr,x,col,n))
        {
            arr[x][col]=1;
            if(n_Queens(arr,x+1,n))
            {
                return true;
            }
            arr[x][col]=0; // backtrack
        }
    }
    return false;

}

int main()
{
    int n;
    cin>>n;
    int ** arr= new int*[n];
    for(int i=0;i<n; i++)
    {
        arr[i]=new int[n];
        for(int j=0; j<n; j++)
            arr[i][j]=0;
    }

    if(n_Queens(arr,0,n))
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}