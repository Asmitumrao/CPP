#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    // costructor///////
    node(int val)
    {
        data=val;
        next=NULL;
    }
    
};
void intsert_at_tail(node* &head,int val )
{
    node* n=new node(val);

    if(head==NULL)
    {
        head=n;
        return;
    }
    node *temp=head;
    while(temp->next!=NULL)
    { 
        temp=temp->next;

    }
    temp->next=n;

}


int main()
{
    return 0;
}