// no of ways to reach from start to end of a grid

#include<iostream>
using namespace std;

void grid_path(int i, int j, int m, int n,int &sum)
{
    //base case
    if(i== m-1 && j== n-1)
        sum++;
    //recurssive case
    if(i<m)
        grid_path(i+1, j, m, n, sum);
    if(j<n)
        grid_path(i, j+1, m, n, sum);

}

int main()
{   
    int sum=0;
    grid_path(0,0,2,4 ,sum);
    cout<<sum<<endl;
    return 0;

}