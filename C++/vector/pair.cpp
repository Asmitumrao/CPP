#include<iostream>
using namespace std;
int main()
{
    pair<int,int> p;
    p.first= 20;
    p.second=30;
    cout<<p.first<<" "<<p.second<<endl;
    swap(p.first,p.second);
    cout<<p.first<<" "<<p.second<<endl;
    return 0;

}