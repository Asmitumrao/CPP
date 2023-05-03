#include<iostream>
using namespace std;

int factorial(int n)
{   if(n<=1)
        return 1;
    else 
        return n*(factorial(n-1));

}


int fabi(int n)
{   
    if(n<2)
        return 1;
    else
        return fabi(n-1)+fabi(n-2);
}


int main()
{   
    ///recursion

    //factorial of a number by recusion
    //6!=6*5*4*3*2*1=720
    //similarly ==> n!=n(n-1)!
    int a; 
    cin>>a;

   // cout<<"the factorial  of a is "<<factorial(a)<<endl;
   cout<<"fabinaci sequence at position a is "<<fabi(a)<<endl;

   


    


    return 0;
}