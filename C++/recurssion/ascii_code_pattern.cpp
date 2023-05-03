#include<iostream>
using namespace std;
void sequence2(string s,string ans)
{
    //base case
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    //recurssive case
    char k=s[0];
    int code=k;
    string ros=s.substr(1);
    sequence2(ros,ans);
    sequence2(ros,ans+k);
    sequence2(ros,ans+to_string(code));
}
int main()
{
    sequence2("AB","");
    return 0;


}