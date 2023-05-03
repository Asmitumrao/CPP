#include<iostream>
using namespace std;

int arr_sum(int arr[], int size)
{
    int sum=0;
    for(int i=0; i<size; i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    int n, arr[100];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<arr_sum(arr,n)<<endl;
    
    return 0;

}