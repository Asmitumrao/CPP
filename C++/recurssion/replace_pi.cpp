#include<iostream>
using namespace std;
void replace_pi(string s)
{   
    //base case
    if(s.length()==0)
        return ;

    //recurive case
    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        string reststring=s.substr(2);
        replace_pi(reststring);
    }
    else
    {
        cout<<s[0];
        string reststring=s.substr(1);
        replace_pi(reststring);
    }
} 
int main()
{
    replace_pi("pippxxppiixipi");
    return 0;
}