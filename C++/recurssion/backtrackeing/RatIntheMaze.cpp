// Backtracking is an algorithmic-technique for solving recursive problems by trying to build every 
// possible solution incrementally and removing those solutions that fail to satisfy the constraints
//  of the problem at any point of time.


bool isSafe(int **arr,int x,int y, int n)
{
    if(x<n && y<n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratMaze(int **arr, int x, int y, int n, int** solArr)
{

    if(x==(n-1) && y==(n-1))
    {
        solArr[x][y]=1;
        return true;
    }


    if(isSafe(arr,x,y,n))
    {
        solArr[x][y]=1;
        if(ratMaze(arr,x+1,y,n,solArr))
            return true;
        if(ratMaze(arr,x,y+1,n,solArr))
            return true;
        solArr[x][y]=0;
    }
    return false;

}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    // maze array---------------------------------
    int ** arr=new int*[n];
    for(int i=0; i<n; i++)
    {
        arr[i]=new int[n];
    }


    // taking input maze array------------------------
    for(int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }


    //solution array--------------------------------
    int ** solarr=new int*[n];
    for(int i=0; i<n; i++)
    {
        solarr[i]=new int[n];
        for(int j=0; j<n; j++)
            solarr[i][j]=0;
    }

    // output array--------------------------------------

    cout<<ratMaze(arr,0,0,n,solarr)<<endl;

    for(int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<solarr[i][j]<<" ";
        }cout<<endl;
    }
    
    return 0;


}