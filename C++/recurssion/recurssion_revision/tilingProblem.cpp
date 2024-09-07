#include<bits/stdc++.h>
using namespace std;


int tileWays(int n)
{
    if(n<=1)
        return n;
    //recurssive case
    return tileWays(n-1)+tileWays(n-2);
}


int main()
{

    cout<<tileWays(4);
    return 0;


}