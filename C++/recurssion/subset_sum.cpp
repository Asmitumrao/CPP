#include<iostream>
using namespace std;
void subset_sum(int *arry, int n, int i=0, int sum=0 )
{   //base case
    if(i==n)
    {
        cout<<sum<<' ';
        return ;
    }
    //recurssive case
    subset_sum(arry, n, i+1, sum );
    subset_sum(arry, n, i+1, sum+arry[i] );
}
int main()
{
    int arry[]={2,4,5};
    subset_sum(arry,3);
    return 0;
}