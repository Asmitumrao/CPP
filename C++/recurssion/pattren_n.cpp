#include<iostream>
using namespace std;
void print_n(int n)
{
    //base case 
    if(n<1){
        return;
    }
    //recurssive case
    print_n(n-1);
    cout<<n<<" ";
}
int main()
{
    print_n(8);
    return 0;
}
