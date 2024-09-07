#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int s,int mid, int e)
{
    int n1=(mid-s+1),n2=(e-mid);
    vector<int> a(n1);
    vector<int> b(n2);
    for(int i=0; i<n1; i++)
        a[i]=v[i+s];
    for(int i=0; i<n2; i++)
        b[i]=v[mid+1+i];
    int i=0;
    int j=0;
    int k=s;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
            v[k++]=a[i++];
        else
            v[k++]=b[j++];
    }
    while(i<n1)
        v[k++]=a[i++];
    while(j<n2)
        v[k++]=b[j++];


}
void merge_sort(vector<int> &v, int s, int e)
{
    if(s<e)
    {
        int mid=(s+e)/2;
        merge_sort(v,s,mid);
        merge_sort(v,mid+1,e);

        merge(v,s,mid,e);
    }
}
int main()
{
    vector<int> v={5,4,3,2,1};
    merge_sort(v,0,4);
    for(int i:v)
        cout<<i<<" ";
    return 0;
}


//time and space complexity................
//-----------------------------------------------------------
/*
        RECURRANCE REALTION  

        T(n)=2T(n/2)+n
        T(n/2)=2T(n/4)+n/2
        T(n/4)=2T(n/8)+n/4
        .
        .
        .
        T(1)=1
*/

/*
        LEVELS:
        n/2^k=1
        n=2k;
        k=logn

*/

/*
        T(n)=2T(n/2)+n          *1  +
        T(n/2)=2T(n/4)+n/2      *2  +
        T(n/4)=2T(n/8)+n/4      *4  + 
        .                       *8  +
        .                       .
        .                       .
        .                       .   
        T(1)=1                  *2^(logn)                

*/
/*
        T(n)=n+n+n+n..........logN times =NlongN
*/



