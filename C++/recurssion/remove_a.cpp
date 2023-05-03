#include<iostream>
using namespace std;
string removea(string s)
{
    //base case
    if(s.length()==0)
        return "";
    //recurssive case
    string prev=removea(s.substr(1));
    if(s[0]=='a')
        return prev;
    else
        return(s[0]+prev);
}
int main()
{
    string s="applebanana";
    cout<<removea(s);
    return 0;
}