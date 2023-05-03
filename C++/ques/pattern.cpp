#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if((j+i)%2==0)
                cout<<1<<" ";
            else
                cout<<2<<" ";    
        }   
        cout<<endl;
    }
}