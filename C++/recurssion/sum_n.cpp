#include<iostream>
using namespace std;
int sum_till_n(int n)
{
    //basecase
    if(n==0)
        return 0;
    //recursssive case
    int prevsum=sum_till_n(n-1);
    return (n+prevsum);
}
int main()
{   
    cout<<sum_till_n(5)<<endl;
    return 0;
}