#include<iostream>
using namespace std;
int main()
{
    int arry[8]={0,8,0,7,0,7,0,0};
    int count=0;
    for(int i=0; i<8; i++)
    {
        if(arry[i]==0)
        {
            for(int j=i; j<8-1-count; j++)
            {
                swap(arry[j],arry[j+1]);
            }
            count++;
        }
    }
    for(int i=0; i<8; i++)
    {
        cout<<arry[i]<<" ";
    }
    return 0;

}