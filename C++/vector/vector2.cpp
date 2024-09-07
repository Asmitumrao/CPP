#include<iostream>
#include<vector>
using namespace std;
 int main()
 {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    //making a iterator
    vector <int> :: iterator it;
    for(it=v.begin(); it!=v.end(); it++)
    {
      cout<<*it<<" ";
    }

   cout<<endl;
    // another method;
    for(int i=0; i<v.size(); i++)
    {
      cout<<v[i]<<" ";
    }

      cout<<endl;
    // another methood
    
    for(int i:v)
    {
      cout<<i<<" ";
    }

   //another vector 
   vector<int > v2;
   v2.push_back(99);
   v2.push_back(88);
   v2.push_back(44);

   for(int k:v2)
   {
      cout<<k<<" ";
   }
   cout<<endl;

   swap(v,v2);

   for(int i:v)
      cout<<i<<" ";
   for(int i:v2)
      cout<<i<<" ";

      return 0;
 }
