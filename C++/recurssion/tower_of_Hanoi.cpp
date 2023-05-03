#include<iostream>
using namespace std;
void tower_of_hanoi(int n,char src,char dest,char helper)
{
    //base case
    if(n==0)
        return ;
    //recurssive case
    tower_of_hanoi(n-1,src,helper,dest);
    cout<<"move "<<n<<"th block to "<<src<<" to "<<dest<<endl;
    tower_of_hanoi(n-1,helper,dest,src);
}

int main()
{
    tower_of_hanoi(3,'A','C','B');
    return 0;

}