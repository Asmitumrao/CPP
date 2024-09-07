#include<bits/stdc++.h>
using namespace std;

vector<int> wavesort(vector<int> v)
{
    for(int i=1; i<v.size()-1; i+=2)
    {
        if(v[i]>v[i-1])
          swap(v[i],v[i-1]);
        if(v[i]>v[i+1] && i<=v.size()-2)
          swap(v[i],v[i+1]);
    }
    return v;

    // time complexity=O(N/2)==>O(N)
    //space complexity=O(1)
}
int main()
{
    vector<int> v={1,3,2,3,4,5,6,7,8,6,4,43,3,23,4,5,6,57,64,5,3565,75,5,5,3,3154,6,3};
    vector<int> ans=wavesort(v);
    for(int i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}