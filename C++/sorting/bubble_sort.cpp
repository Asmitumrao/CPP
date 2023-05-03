#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void b_sort(int *arry, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arry[j]<arry[j+1])
                swap(arry[j],arry[j+1]);
        }
    }
}
int main()
{
    int arry[]={1,4,63,2,5,62,33,55};
    for(int k=0; k<8; k++)
    {
        cout<<arry[k]<<" ";
    }
    cout<<endl;
    b_sort(arry,8);
    for(int k=0; k<8; k++)
    {
        cout<<arry[k]<<" ";
    }

}
