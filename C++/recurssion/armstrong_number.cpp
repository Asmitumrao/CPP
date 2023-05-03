#include<iostream>
#include<math.h>
using namespace std;
int strong(int n,int d )
{
    //base case
    if(n==0)
    return 0; 
    //recurssive case
    int prev_digit=strong(n/10,d);
    return (prev_digit + pow((n%10),d));

}
int main()
{
    return 0;

}