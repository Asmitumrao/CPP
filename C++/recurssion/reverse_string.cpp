#include<iostream>
using namespace std;
void rev(string s)
{    //base case
    if(s.length()==0)
        return;
    //recurssive case
    string reststring=s.substr(1);
    rev(reststring);
    cout<<s[0];
}
int main()
{
    rev("japan");
    return 0;
}