#include<iostream>
using namespace std;
int GCD(int a, int b )
{
    int mn=min(a,b);
    int mx=max(a,b);
    //base case
    if(mn==0)
        return mx;
    //recurssive case
    return GCD(mn,(mx-mn));
}
int main()
{
    cout<<GCD(99,99);
    return 0;
}