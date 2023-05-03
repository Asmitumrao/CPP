#include<iostream>
#include<vector>
using namespace std;
void selection_sort(vector<int> &v)
{ 
    int n=v.size();
    for(int i=0; i<n-1; i++ )
    {
        //finding the minimum element
        int minind=i;
        for(int j=i+1; j<n; j++)
        {
            if(v[j]<v[minind])
                minind=j;
        }
        // placing the minimum element inn the beginning of the arry
        if(minind!=i)
            swap(v[i],v[minind]);
    }
    return;
}
int main()
{
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    selection_sort(v);
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}