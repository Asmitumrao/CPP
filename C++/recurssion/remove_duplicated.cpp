#include<iostream>
using namespace std;
string remove_duplicate(string s)
{   
    //base case
    if(s.length()==0)
        return "";
    //recurssive case
    string reststring=remove_duplicate(s.substr(1));
    if(s[0]==reststring[0])
        return (reststring);
    return(s[0]+reststring);
}
int main()
{
    cout<<remove_duplicate("aaabbbccccdddd");
    return 0;
}
