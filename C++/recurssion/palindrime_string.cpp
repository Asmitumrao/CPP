#include<iostream>
using namespace std;
bool palindrome_check(string s,int n)
{   
    //base case

    if((s.length()==0) || (s.length()==1))
        return 1;
    
    //recurssive case
    
    if(palindrome_check(s.substr(1,(n-2)),(n-2)) && (s[0]==s[n-1]))
    {
        return 1;
    }
    return 0;

}
int main()
{
    string s="appleelppa";
    cout<<palindrome_check(s,10);
    return 0;
}