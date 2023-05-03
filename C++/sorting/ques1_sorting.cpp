#include<iostream>
using namespace std;
void zeroz(int*arry,int n)
{

for(int i=0; i<n; i++)
    {   
        bool flag=0;
        for(int j=0; j<n-1-i; j++)
        {
            if(arry[j]==0 and arry[j+1]!=0)
            {
                swap(arry[j],arry[j+1]);
                flag=1;
            }
        }
        if(!flag)
        {
            break;
        }
    }
}
// void ZerozInEnd(int *array,int n)
// {
//     int a=0,b=0;
//     while(b<n)
//     {
//         if(array[a]!=0)
//         {
//             a++;
//         }
//         if(array[b]==0 or b<a)
//         {
//             b++;
//         }
//         if(array[a]==0 && array[b]!=0 && b>a)
//         {
//             swap(array[a],array[b]);
//             b++;
//             a++;
//         }
//     }
// }
int main()
{
    // int n;
    // cin>>n;
    int arry[8]={2,5,0,8,0,4,0,0};
    //ZerozInEnd(arry,8);
    for(int i=0; i<8; i++ )
    {
        cout<<arry[i]<<" ";
    }
    cout<<endl;
    
}