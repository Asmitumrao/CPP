#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void permutation(vector<int> &a, int idx)
{
    if(idx ==a.size())
    {
        ans.push_back(a);
        return ;
    }
    for(int i=idx; i<a.size(); i++)
    {
        swap(a[i],a[idx]);
        permutation(a,idx+1);
        swap(a[i],a[idx]);
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int &p : a)
    {
        cin>>p;
    }


    //-----------------------------------------------using stl function--------------------------------------------------
    sort(a.begin(),a.end());
    do{
        ans.push_back(a);
    }while(next_permutation(a.begin(), a.end()));

    // permutation(a,0);
    for(vector<int> i: ans)
    {
        for(int j : i)
        {
            cout<<j<<" ";
        }cout<<endl;
    }
    return 0;

}