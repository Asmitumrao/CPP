#include<iostream>
using namespace std;
void inc_sequence(int n)
{
    //base case
    if(n==0)
        return ;
    //recurssive case
    inc_sequence(n-1);
    cout<<n<<" ";  
}
void dec_sequence(int n)
{
    //base case
    if(n==0)
        return;
    //recurssive case
    cout<<n<<" ";
    dec_sequence(n-1); 
}
int main()
{   
    inc_sequence(8);
    cout<<endl;
    dec_sequence(8);
    return 0; 
}