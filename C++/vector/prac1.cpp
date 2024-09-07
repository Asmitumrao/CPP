#include<iostream>
#include<vector>
#include<algorithm>
// #include<algorithim>
using namespace std;

bool comperator(pair<int, int>p1,pair<int, int> p2)
{
    return p1.second<p2.second;
}

int main()
{
    vector<int> v={10,16,7,14,5,3,12,9};
    vector<pair<int, int >> hh;
    for(int i=0; i<v.size(); i++)
    {
        // pair<int,int> k;
        // k.first=i;
        // k.second=v[i];
        // hh.push_back(k);


        // or

        hh.push_back(make_pair(i,v[i]));
    }
    sort(hh.begin(),hh.end(),comperator);
    int k=0;

    for(pair<int, int > i:hh)
    {
        cout<<i.first<<' '<<i.second<<endl;
        v[i.first]=k++;

    }
    cout<<endl;

    for(int i:v)
    {
        cout<<i<<" ";
    }


    
    

    return 0;

}