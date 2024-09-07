#include<bits/stdc++.h>
using namespace std;
void helper(vector<int> &nums,vector<vector<int>> &ans, int idx)
{
    if(idx == nums.size())
    {
        ans.push_back(nums);
        return ;
    }
    for(int i=idx; i<nums.size(); i++)
    {
        if(i!=idx and nums[i] == nums[idx])
            continue; 

        swap(nums[i],nums[idx]);
        helper(nums,ans,idx+1);
        swap(nums[i],nums[idx]);
    }

}

vector<vector<int>> permute(vector<int> &nums)
{
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    helper(nums,ans,0);
    return ans;

}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a)
    {
        cin>>i;
    }
    vector<vector<int>> res = permute(a);
    cout<<endl;
    for(auto v: res)
    {
        for(int i: v)
            cout<<i<<" ";
        cout<<endl;
    }
}