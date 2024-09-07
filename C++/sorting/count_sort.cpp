#include<bits/stdc++.h>
using namespace std;
//find the count of every distinct element in the array
//calculate the position of each element in the sorted array

vector<int> count_sort(vector<int>v)
{
    int mx=0;
    for(int i:v)
        mx=max(mx,i);
    vector<int> count (mx+1,0);
    for(int i:v)
    {
        count[i]++;
    }
    
    for(int i=1;i<=mx; i++)
    {
        count[i]=count[i]+count[i-1];
    }
    vector<int> ans(v.size());
    for(int i=v.size()-1; i>=0; i--)
    {
        ans[--count[v[i]]]=v[i];

    }
    return ans;

    //-----------------------------------------------------------------------------
    //time complexiity=O(max(N,Ai))
    //space complexity=?

}

int main()
{

    vector<int> v={10,3,5,3,2,6,5,4,2,4};
    vector<int> ans;
    ans=count_sort(v);
    for(int i:ans)
        cout<<i<<" ";
    cout<<endl<<"done";

    return 0;




}