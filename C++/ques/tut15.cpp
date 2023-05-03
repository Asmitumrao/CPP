#include<iostream>
using namespace std;

//Fumction  prototype
//syntax-----> fumction name(argyments);

//int sum(int a ,int b);------->Acceptable
//int sum(int a,b);----> not Acceptable
//int sum(int ,int )------> Acceptable


int sum(int a,int b);



int main()
{
    int num1;
    cout<<"enter first number  ";
    cin>>num1;

    int num2;
    cout<<"enter second number  ";
    cin>>num2;
    cout<<sum(num1,num2);

    //formal parameters are a and b while actual parameters are num1 and num2;
     



    return 0;

}

int sum(int a ,int b)
{

    int c=a+b;
    return c;
}