#include<bits/stdc++.h>
using namespace std;

void genereateSubstring(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    genereateSubstring(s.substr(1),ans);
    genereateSubstring(s.substr(1),ans+s[0]);


}

int main()
{

    string a="ABC";
    genereateSubstring(a,"");

    return 0;
}