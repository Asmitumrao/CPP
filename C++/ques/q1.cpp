#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+1/i;
    }
    cout<<sum<<endl;
    return 0;

}