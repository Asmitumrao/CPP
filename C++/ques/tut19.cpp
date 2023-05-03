#include<iostream>
using namespace std;

// ***********FUNCTION OVERLODING****************

// voolume of cube
int volume(int a)
{
    return a*a*a ;
}

//VOLUME OF CUBOID
int volume(int a,int b,int c)
{
    return a*b*c ;

}
int volume(int r, int h)
{
    return 3.14*r*r*h;
}



int main()
{
  cout<<"volume of cube is "<<volume(3)<<endl;
  cout<<"volume of cuboid "<<volume(3,4,5)<<endl;
  cout<<"volume of cylinder "<<volume(3,4)<<endl;

    return 0; 
}