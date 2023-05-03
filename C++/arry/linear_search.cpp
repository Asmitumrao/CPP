#include<iostream>
using namespace std;

bool search( int arry[] ,int n, int ele)
{
    for(int i=0; i<n;i++)
    {
        if(arry[i]==ele)
            return 1;
    }
    return 0;
}
int main()
{
    int n,ele;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<"enter element to search"<<endl;
    cin>>ele;
    cout<<search(arr ,n,ele)<<endl;
}