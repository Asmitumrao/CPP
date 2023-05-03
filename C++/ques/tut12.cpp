//pointer in cpp
// pointers store adress of other data types

#include<iostream>
using namespace std;
int main()
{
    int a=9;
    int* b=&a;  // where *--------->dereferencing operator
    //             // where  & ---------> (adress of ) operator
    // cout<<"adress of a is"<< &a <<endl;
    // cout<<"adress of a is"<< b<< endl;
    
    // // for finding the value at any pointer we use *(dereferencing operator) 
    // cout<<"adress of pointer b is is "<<*b<<endl;
    // cout<<"the value at pointer b is"<<*(&a)<<endl;

    // cout<<"the adress  of pointer "<<&b<<endl;

    // Pointer to pointer ---------> adress of a pointer

    int** c=&b;
    cout<<"adress of a is "<<&a<<endl;    
    cout<<"value  of b is  "<<b<<endl;
    cout<<"the value stored at pointer  b is "<<*b<<endl;

    cout<<"the adress of  pointer b is"<<&b<<endl;
    cout<<"the value of c is"<<c<<endl;
    cout<<"the value stored at c is"<<*c<<endl;


    






        


}

