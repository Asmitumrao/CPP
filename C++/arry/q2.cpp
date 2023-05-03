#include<iostream>
#include<climits>
using namespace std;

int mx=INT_MIN;
int mn=INT_MAX;

int getmax(int arry[], int size)
{
    for(int j=0;j<size;j++)
    {
        if(arry[j]>mx)
            mx=arry[j];
    }
    return mx;
}

int getmin(int arry[], int size)
{
    for(int j=0;j<size;j++)
    {
        if(arry[j]<mn)
            mn=arry[j];
    }
    return mn;
}
int main()
{
    //maximaum and minimum number in an arry
    int size;
    cin>>size;
    int num[1000];

    for(int i=0;i<size;i++)
    {
        cin>>num[i];

    }

    cout<<getmin(num,size)<<endl;
    cout<<getmax(num,size)<<endl;
    return 0;
}
