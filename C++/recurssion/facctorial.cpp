#include<iostream>
using namespace std;
int factorial(int n)
{
    //base case
    if(n==1)
        return 1;    
    //recurssive case
    return (n*factorial(n-1));


}

int main()
{
    cout<<factorial(5);
    return 0;
}