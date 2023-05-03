#include<iostream>
using namespace std;
void subseq(string s,string ans)
{   //base case
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }
    //recurssive case
    char k=s[0];
    string ros=s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+k);
    
}
int main()
{
    subseq("abc","");
    return 0;
}