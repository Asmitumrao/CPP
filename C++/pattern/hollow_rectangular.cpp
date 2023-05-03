#include<iostream>
using namespace std;


int main()
{
    int length,bredth;
    cin>>length>>bredth;

    for(int i=1;i<=length;i++)
    {
        for(int j=1;j<=bredth;j++)
        {
            if(i==1 || i==length || j==1 || j==bredth )
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }


        }
        cout<<endl;
    }
}