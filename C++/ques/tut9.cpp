//C++ cotrol structures
//1.   sequence structure 
//2.   selection structure
//3.   loop structure


//if else statement
// if else ladder
// switch case


#include<iostream>
using namespace std;

int main(){

    // cout<<"this is tururial 9"<<endl;
    int age;
    cin>>age;
    // if((age<18)&&(age>0))
    // {
    //     cout<<"you cannot come to my party"<<endl;

    // }
    // else if(age==18)
    // {
    //     cout<<"you are a kid , you can get a kid pass"<<endl;

    // }
    // else if(age<0)
    // {
    //     cout<<"you are not yet born"<<endl;
    
    //     }
    // else{
    //     cout<<"you can come to party"<<endl;
    // }


    // switch case statements

    switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl;
        break;
    case 22:
        cout<<"you are 22"<<endl;
        break;
    case 44:
        cout<<"you are  44"<<endl;
        break;
        
    
    default:
        cout<<"no special case"<<endl;
        
        break;
    }




    return 0;

}
 