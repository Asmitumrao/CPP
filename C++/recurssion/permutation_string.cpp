#include<iostream>
using namespace std;
void permutation(string s,string ans)
{
    //base case 
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }
    //recurssive case
    for(int i=0;i<s.length();i++)
    {
        char ch =s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        permutation(ros,ans+ch);

    }
    
    
}
int main()
{
    permutation("ABCD","");
    return 0;


}