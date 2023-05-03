#include<iostream>
using namespace std;
void subsequence(string &s, int n, int i=0, string result="")
{
    //base case
    if(i==n)
    {
        cout<<result<<" ";
        return;
    }
    //recursive case
    subsequence(s, n, i+1, result);
    subsequence(s, n, i+1, result+s[i]);
}
int main()
{
    string s="apple";
    subsequence(s,5);
    return 0;
}