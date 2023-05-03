#include<iostream>
using namespace std; 
int max_value(int *arry,int idx,int n)
{
    //base case
    if(idx==(n-1))
        return arry[idx];
    //recurssive case
    return(max(arry[idx],max_value(arry,idx+1,n)));
}
int main()
{
    int arry[]={10000,3,4,5,600,7,342,52,2000};
        cout<<max_value(arry,0,9);
    return 0;
}