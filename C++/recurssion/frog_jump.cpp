#include<iostream>
using namespace std;
int frog_cost(int arry[] ,int idx,int n)
{
    //base case
    if(n-idx==2)
        return(abs(arry[idx+1]-arry[idx]));
    if(n-idx==3)
        return min(abs(arry[idx+2]-arry[idx]),abs(arry[idx+1]-arry[idx]));
    //recurssive case 
    int w1=abs(arry[idx+1]-arry[idx])+frog_cost(arry,idx+1,n);
    int w2=abs(arry[idx+2]-arry[idx])+frog_cost(arry,idx+2,n);
    return (min(w1,w2));
}
///////////////////////////////////////////////////////////////////////////////////////////////////
int frog_cost2(int arry[] ,int n)
{
    //base case
    if(n==2)
        return(abs(arry[1]-arry[0]));
    if(n==1)
        return 0;
    //recurssive case 
    int w1=abs(arry[1]-arry[0])+frog_cost2(arry+1,n-1);
    int w2=abs(arry[2]-arry[0])+frog_cost2(arry+2,n-2);
    return (min(w1,w2));
}


int main()
{
    int arry[]={10,30,40,20};
    cout<<frog_cost(arry,0,4)<<endl;
    cout<<frog_cost2(arry,4);

    return 0;

}