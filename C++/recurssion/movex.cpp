#include<iostream>
using namespace std;
#include <iostream>
using namespace std;


string movex(string s)
{   
    //base case

    if(s.length()==0)
        return "";
    //recurssive case
    string previousstr=movex(s.substr(1));
    if(s[0]=='x')
        return (previousstr+s[0]);
    return (s[0]+previousstr);
}
int main()
{   
    cout<<movex("abxxuidxxuuixu");
    return 0;
}
