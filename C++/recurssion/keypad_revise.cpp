#include<bits/stdc++.h>
using namespace std;

string keys[]={"","abc","def","ghi","jkl","mno","pqr","stu","vwx","yz"};

void keypad_dial(string s,string ans)
{
    if(s.length()==0)
    {    
        cout<<ans<<endl;
        return ;
    }
    string curr=keys[s[0]-'0'];
    string ros=s.substr(1);
    for(int i=0; i<curr.length(); i++)
    {
        keypad_dial(ros,ans+curr[i]);
    }
    return;

    
}

int main()
{
    keypad_dial("23","");
    return 0;
}