#include<bits/stdc++.h>
using namespace std;

int countPath(int s, int e)
{

    if(s==e)
        return 1;
    if(s>e)
        return 0;
    //recurssive case
    int count=0;

    for(int i=1; i<=6; i++)
    {
        count+=countPath(s+i,e);
    }
    return count;

}

int main()
{
    int x=countPath(0,90);
    cout<<x<<endl;
    return 0;
}