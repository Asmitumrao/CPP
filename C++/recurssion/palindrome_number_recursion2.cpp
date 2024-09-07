#include<iostream>
using namespace std;
bool check_palindrome(int n,int &temp)
{   //base case
    if(n==0)
    {
        return 1;
    }
    //recurssive case
    //bool r=check_palindrome(n/10,temp);
    bool result=(check_palindrome(n/10,temp) && (n%10==temp%10)  );
        //cout<<result<<endl;

        temp=temp/10;
        //cout<<n<<" "<<*temp<<endl;
        return result;
}
int main()
{
    int n=;
    cout<<check_palindrome(n,n);
    
    return 0;
}