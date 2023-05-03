#include<iostream>
using namespace std;
string keys[]={"","abc","def","ghi","jkl","mno","pqr","stu","vwx","yz"};
void keybr(string s, string ans)
{
    //base case 
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }
    //recurssive case
    char ch=s[0];
    string code=keys[(ch - '0')];
    string ros =s.substr(1);
    for(int i=0;i<code.length();i++)
    {
        keybr(ros,ans+code[i]);
    }
    
}
int main()
{
    keybr("234","");
    return 0;
}