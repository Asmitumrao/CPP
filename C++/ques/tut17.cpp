#include<iostream>
using namespace std;


// Inline functions directly replace the funcrion call by the code
//it should be used for the functions that are generally small in size



inline int product(int x , int y)
{
    return x*y;
}
int main()
{   
    int a,b;
    cout<<"Enter th evalue of a and b "<<endl;
    cin>>a>>b;

    cout<<"'The produt of a and b is "<<product(a,b);

    return 0;

}