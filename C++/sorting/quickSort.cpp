#include<bits/stdc++.h>
using namespace std;

int pivot(vector<int> &v,int s,int e)
{
    int pi,i,j;
    pi=v[e];
    i=s-1;
    j=s;
    while(j < e)
    {
        if(v[j]<pi)
        {
            i++;
            swap(v[j],v[i]);
        }
        j++;

    }
    swap(v[i+1],v[e]);
    return(i+1);

}
void quickSort(vector<int> &v,int s,int e)
{
    if(s<e)
    {
        int pi=pivot(v,s,e);

        quickSort(v,s,pi-1);
        quickSort(v,pi+1,e);
    }
}

int main()
{
    vector<int> v={5,4,3,2,1};
    quickSort(v,0,4);
    for(int i:v)
        cout<<i<<" ";
    return 0;
}