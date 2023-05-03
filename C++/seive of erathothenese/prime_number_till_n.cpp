#include<iostream>
using namespace std;
void seive(int n)
{
    int arry[n]={0};
    for(int i=2;i<=n;i++)
    {
        if(arry[i]==0)
        {
            for(int j=i*i;j<n;j+=i)
            {
                arry[j]==1;
            }

        }
    }
    for(int i=2;i<n;i++)
    {
        if(arry[i]==0)
            cout<<i<<" ";
    }
}
int main()
{
    seive(100);
    return 0;
}