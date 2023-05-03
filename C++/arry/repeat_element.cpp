#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{   int fact=1;
    for(int i=2;i<=n;i++)
        fact*=i;
    return fact;
}
int npr(int n,int r)
{
    int npr=fact(n)/fact(n-r);
    return npr;
    
}

int main() {
	// your code goes here
	// int t;
	// cin>>t;
	// while(t--)
	// {   
    // int n;
    // int arry[n];
    // for(int i=0;i<n;i++)
    //     cin>>arry[i];
    // sort(arry,arry+n);
    // int flag=1;
    // for(int i=0;i<(n/2);i+2)
    // {
    //     if arry[i]>npr(n,i+1)
    //         flag=0;
    //         break;
        
    // }
	    
	// }



    for(int i=1;i<=10;i++)
    {
        cout<<npr(10,i)<<endl;
    }
	return 0;
}
