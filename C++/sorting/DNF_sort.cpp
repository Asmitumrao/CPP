#include<bits/stdc++.h>
using namespace std;


vector<int> DNFsort(vector<int> v)
{
    vector<int> ans;
    int low=0;
    int mid=0;
    int high=v.size()-1;

    while(mid<=high)
    {
        if(v[mid]==0)
        {
            swap(v[mid],v[low]);
            mid++;
            low++;
        }
        else if(v[mid]==1)
        {
            mid++;
        }
        else if(v[mid]==2)
        {
            swap(v[mid],v[high]);
            high--;
        }
        
    }
    return v;

    //time complexity = O(N)
    //space complexity = 1

}
int main()
{

    vector<int> v{0,2,1,2,0,0,1,2,1,2,0,2,2,1};
    vector<int> ans;
    ans=DNFsort(v);
    for(int i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    

    return 0;
}