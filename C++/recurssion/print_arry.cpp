#include<iostream>
using namespace std;
void print_arry(int *arry,int idx,int n)
{
    //base case
    if(idx==(n))
        return;
    //recurssive case
    
    cout<<arry[idx]<<" ";
    print_arry(arry,idx+1,n);

}
int main()
{
    int arry[]={1,2,3,4,5,6,7};
    print_arry(arry,0,7);
    return 0;
}