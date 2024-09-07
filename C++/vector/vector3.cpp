#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v[5];
    v[0].push_back(1);
    v[0].push_back(8);
    v[0].push_back(9);
    v[0].push_back(2);

    v[1].push_back(7);
    v[1].push_back(2);
    v[1].push_back(1);


    v[2].push_back(8);
    v[2].push_back(66);
    v[2].push_back(10);
    v[2].push_back(21);
    v[2].push_back(12);

    v[3].push_back(13);
    v[3].push_back(11);

    v[4].push_back(44);
    v[4].push_back(16);
    v[4].push_back(19);
    v[4].push_back(18);
    v[4].push_back(22);
    v[4].push_back(20);

    for(int i=0; i<5; i++)
    {
        sort(v[i].begin(),v[i].end());
        for(int j: v[i])
            cout<<j<<" ";
        cout<<endl;
    }
    
    return 0;


}