#include<iostream>
#include"bits/stdc++.h"
using namespace std;
string arry[]={"*#.","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void f(string &s, int n, vector<string> &v ,int i=0, string result="")
{

    //base case
    if(i==n)
    {
        v.push_back(result);
        return;
    }
    //recurssive case
    string str = arry[(s[i]-'0')];
    //cout<<str<<endl;
    for(int j=0; j<str.length(); j++)
    {
        f(s,n,v,i+1,result+str[j]);
    }
}
int main()
{
    vector<string> res;
    string s="123";
    f(s,3,res);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}