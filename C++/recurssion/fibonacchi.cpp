#include<iostream>
using namespace std;
int fibonacchi(int n)
{
    //base case
    if(n==1 || n==0)
        return n;
    //recurssive case
    return (fibonacchi(n-1)+fibonacchi(n-2));

}
int main()
{
    cout<<fibonacchi(6);
    return 0;
}