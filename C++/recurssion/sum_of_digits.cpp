
#include<iostream>
using namespace std;
int sum_digits(int n)
{   
    //base case
    if(n==0)
    return 0;
    //recurssive case
    int prev_sum=sum_digits(n/10);
    return (prev_sum+(n%10));
}
int main()
{
    cout<<sum_digits(444)<<endl;
    return 0;

}