#include<iostream>
using namespace std;


int main()
{   
    //declare
    int arry[15];
    cout<<"everty thing is fine"<<endl<<endl;

    //accessiing an arry

    cout<<"value at oth index "<<arry[0]<<endl;

   // cout<<"value at 30th index "<<arry[30000]<<endl;

    cout<<"size of arry "<<sizeof(arry)<<endl;

    //initialiaziation an arry
    int second[15]={3,4,6};

    cout<<"Every thing is fine"<<endl;
    cout<<"value art 2nd index "<<second[2]<<endl;

    //printing the arry
    for(int i=0;i<15;i++)
    {
        cout<<second[i]<<endl;
    }
    
    




    return 0;
}