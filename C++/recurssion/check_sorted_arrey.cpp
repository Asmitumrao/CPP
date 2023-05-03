#include<iostream>
using namespace std;
bool check_sort(int a[],int n)
{
    //base case
    if(1==n)
        return 1;
    //recurssive case
    return((a[0]<=a[1]) &&(check_sort(a+1,n-1)));
}
int main()
{   int a[]={1,2,3,5,6,7,8,9,9};
    cout<<check_sort(a,9);
    return 0;
}