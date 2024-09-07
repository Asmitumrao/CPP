#include<bits/stdc++.h>
using namespace std;

int KnapSack(int value[], int weight[], int wt, int n)
{

    if(n==0 || wt==0)
        return 0; 
    if(wt<weight[n-1])
        return KnapSack(value,weight,wt, n-1);
    

    int included = KnapSack(value, weight, wt-weight[n-1],n-1)+value[n-1];
    int notIncludeded = KnapSack(value,weight,wt, n-1);

    return (max(notIncludeded,included));



    
}
int main()
{
    int wt[]={10,20,30,40};
    int val[]={100,50,150,200};
    int w=50;

    cout<<KnapSack(val,wt,w,4)<<endl;
    return 0;
}