#include<iostream>
using namespace std;
void k_multiples(int n,int k)
{   //base case
    if(k<1)
    return;
    //recurssive case
    k_multiples(n,k-1);
    cout<<n*k<<" ";
}
int main()
{
    k_multiples(3,10);
    return 0;
    
}