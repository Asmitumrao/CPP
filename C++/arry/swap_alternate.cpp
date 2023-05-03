#include<iostream>
using namespace std;

void print_arry( int arry[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arry[i]<<" ";
    cout<<endl<<"arry printed"<<endl;

}

void altenate_swap(int arry[] ,int n )
{   
    int s=0;
    int e=n-s-1;
    while(s<=e)
    {
        int temp=arry[s];
        arry[s]=arry[e];
        arry[e]=temp;
        s+=2;
        e-=2;
    }

}


int main()
{
    int arry[100],n;
    cin>>n;
    for(int i=0 ; i<n; i++)
    {
        cin>>arry[i];
    }

    print_arry(arry,n);
    altenate_swap(arry,n);
    print_arry(arry,n);

    return 0;



}