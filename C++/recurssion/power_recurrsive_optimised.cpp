#include<iostream>
using namespace std;
int power(int n,int q)
{
    if(q==0)
        return 1;
    if(!(q%2))
    {   
        int result=power(n,q/2);
        return(result*result);
    }
    else
    {
        int result=power(n,(q-1)/2);
        return(n*result*result);
    }
}
int main()
{
    cout<<power(2,10)<<endl;
    return 0;
}