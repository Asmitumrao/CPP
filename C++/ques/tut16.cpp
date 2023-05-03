#include<iostream>
using namespace std;

int sum(int a,int b)
{
    int c=a+b;
    return c;

}

void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}

// the above function will not swap the values
void swapPointer(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}


int main()
{
    //
    // int a=7,b=9;
    // cout<<"the value of a is "<<a<<endl<<"the value of  b is "<<b<<endl;
    // swap(a,b);
    // cout<<"the value of a is "<<a<<endl<<"the value of  b is "<<b<<endl;
    //this will not swap a and b;


    //using call by reference
    int a=7,b=9;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of  b is "<<b<<endl;
    swapPointer(&a,&b);
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of  b is "<<b<<endl;
    
    return(0);

}