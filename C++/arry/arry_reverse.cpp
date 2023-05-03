#include<iostream>
using namespace std;
int reverse(int arry[], int n)
{
    int rev_arry[n];
    int start=0;
    int end=n-1;
    while(start<end)
    {   
        int temp;
        temp=arry[start];
        arry[start]=arry[end];
        arry[end]=temp;
        start++;
        end--;

    }
    return 0;  
}
void print_arry( int arry[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arry[i]<<" ";
    cout<<endl<<"arry printed"<<endl;

}
int main()
{
    int n,a[100];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    print_arry(a,n);
    reverse(a,n);
    print_arry(a,n);

    return 0;

    
}