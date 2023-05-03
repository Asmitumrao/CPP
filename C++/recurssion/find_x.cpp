#include<iostream>
using namespace std;
bool f(int *arry,int i,int n, int k)
{
    //base case
    if(i == n)
    {
        return 0;
    }
    //recurssive case
    return (arry[i] == k) || (f(arry, i+1, n, k));
}
void find_x(int arry[],int i,int n,int k)
{ 
    //base case
    if(i==n)
    {
        cout<<"NO"<<endl;
        return;
    }
    // recurssive  case
    if(arry[i]==k)
        cout<<"YES"<<endl;
    else
        find_x(arry,i+1,n,k);
}
int main()
{
    int arry[]={1,23,5,67,8,8,44,2,65,4,35,63,7,3,6};
    int n=sizeof(arry)/(sizeof(int));
    cout<<f(arry, 0, n, 90)<<endl;
    find_x(arry,0,n,8);

    return 0;
}