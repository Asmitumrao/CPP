#include<iostream>
using namespace std;


int main()
{
    int arr[15]={1,3,5,6,7,8,9,12,14,16,19,24,54,56,88};
    int key=18;
    int s=0,e=14;
    
    int flag=0;
    while(s<=e)
    {
        int mid=e+s/2;
        
        if(arr[mid]==key)
        {
            cout<<"YES"<<" at index "<<mid<<endl;
            flag=1;
            break;

        }
        else if(arr[mid]>key)
            e=mid-1;
        else if(arr[mid]<key)
            s=mid+1;
        mid=e+s/2;   
    }
    if(flag==0)
        cout<<"No"<<endl;
    
    
}