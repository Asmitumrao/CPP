#include<bits/stdc++.h>
using namespace std;



void stringPermutation(string s,string p)
{

    if(s.length()==0)
    {
        cout<<p<<" ";
        return ;
        
    }

    for(int i=0; i<s.length(); i++)
    {
        char fx=s[i];
        string per=s.substr(0,i)+s.substr(i+1,s.length()-i-1);
        stringPermutation(per,p+fx);

    }
}
int main()
{
    stringPermutation("ABCD","");
    return 0;

}