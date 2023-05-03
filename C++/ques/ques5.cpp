#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"a; "<<a<<endl<<"b: "<<b<<endl;
    return 0;
    


}