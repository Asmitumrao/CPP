#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    //base case
    if(a%b==0)
        return b;
    //recurssive case
    return gcd(b,(a%b));
}
int main()
{
    cout<<gcd(9,6);
    return 0;
}