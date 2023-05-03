#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(array[i]<min)
           { min=array[i];}
   
        if(array[i]>max)
            {max=array[i];}
    }
    cout<<endl<<max<<endl<<min<<endl;

    return 0;





}