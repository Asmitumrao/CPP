#include<iostream>
using namespace std;
int natural_sum(int n)
{
    //base case
    if(n<1) return 0;
    //recurssive case
    int prev_sum=natural_sum(n-1);
    return ((n%2)?(n):(-1*n))+prev_sum;
}
int main()
{
    cout<<natural_sum(10);
    return 0;
}