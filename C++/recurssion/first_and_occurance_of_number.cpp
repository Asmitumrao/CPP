#include<iostream>
using namespace std;
int  firstocc(int a[],int n,int k,int i )
{   //base case
    if(i==n)
        return -1;
    //recurssive case
    if(a[i]==k)
        return i;
    return(firstocc(a,n,k,i+1));
}
int lastocc(int a[],int n,int k,int i)
{   
    //base case
    if(i==n)
        return -1;
    //recurssice case
    int prev_result=lastocc(a,n,k,i+1);
    if(prev_result==-1)
    {
        if(a[i]==k)
            return i;
        return -1;
    }
    return prev_result;
}
int main()
{
    int arry[]={2,4,5,56,6,8,5,7};
    cout<<firstocc(arry,8,7,0)<<endl;
    cout<<endl;
    cout<<lastocc(arry,8,7,0);
    return 0;

}