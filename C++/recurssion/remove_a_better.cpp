#include<iostream>
using namespace std;
string removea(string s,int idx,int n)
{
    //base case
    if(idx>=n ) 
    {
        return "";
    }
    //recurssive case
    string rest_string=removea(s,idx+1,n);
    if(s[idx]!='a')
        return s[idx]+rest_string;
    return rest_string;
}
int main()
{
    string s="apapalaea";
    cout<<removea(s,0,s.length());
return 0;

}