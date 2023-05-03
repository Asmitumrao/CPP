#include<iostream>
using namespace std;
  
int main()
{
    int a=4;
    int *A=&a;
    // cout<<a<<endl<<A<<endl;
    // cout<<*A<<endl;
    // cout<<++a<<endl;
    // cout<<A<<endl;
    // cout<<*A<<endl;
    // cout<<++*A<<endl;
    // cout<<a<<endl;
    int **B=&A;
    // cout<<"adress of a  is "<<&a<<endl;
    // cout<<"value of A is "<<A<<endl;
    // cout<<"adress of A is "<<&A<<endl;
    // cout<<"value of B is "<<B<<endl;
    // cout<<"vlaue of *B is "<<*B<<endl;
    // cout<<"value od **B is "<<**B<<endl;
    // // cout<<"value of ++*B is"<<++*B<<endl;
    // cout<<"value of **B is "<<**B<<endl;
    
    // cout<<"vlaue of *B is "<<*B<<endl;
    

    cout<<"The value of A is "<<A<<endl;
    cout<<"the value of *B is "<<*B<<endl;




    // int**B=&A;
    // cout<<B<<endl;
}