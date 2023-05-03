#include<iostream>
using namespace std;

int LinearSearch(int arry[],int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(key==arry[i])
        return i;

    }
    return -1;

}



int main()
{
    int n,key;
    cin>>n;
    int arry[n];
    for(int i=0;i<n;i++)
    {
        cin>>arry[i];

    }
    cin>>key;
    cout<<LinearSearch(arry,n,key)<<endl;
    return 0;
}