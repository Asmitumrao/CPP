#include<iostream>
using namespace std;
int power(int n,int p)
{
    //base case
    if(p==0)
        return 1;
    //recurssive case
    return (n*power(n,p-1));
}
int main()
{
    cout<<power(3,5);
    return 0;
}