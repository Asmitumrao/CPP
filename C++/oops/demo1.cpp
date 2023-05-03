#include<iostream>
using namespace std;
class Hero{
    //properties
    public:
    char name;
    int health;

    int getheath()
    {
        return health;
    }
    char getname()
    {
        return name;
    }
    void sethealth(int a)
    {
        health=a;
    }
    void setname(char a)
    {
        name=a;
    }
    Hero(){
        cout<<"constructor created"<<endl;
    }

};
//acess modifiers
//paddding and greedy alignment
int main()
{


    // Hero ash;
    // ash.health=80;
    // ash.name='A';

    // cout<<ash.health<<endl;
    // cout<<ash.name<<endl;

    //**************dyanmically**********

    Hero *ash= new Hero;
    (*ash).health=10;
    (*ash).setname='P';
    // cout<<ash.health<<endl;
    // cout<<ash.name<<endl;


    //***************************************constructor*******************************


    // cout<<"before constructor"<<endl;
    // Hero happy;
    // cout<<"after constructor"<<endl;

    

    // ***************param


    return 0;

}