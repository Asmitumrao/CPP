#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *prev , *next;

    //constructor
    node( int data)
    {
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    ~node()
    {
        
    }    

};

// inserting at start of the  D linked list
void insert_at_start(node * &head,int d){
    node* temp = new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;

}
//inserting at end of the DLL
void insert_end(node* head,int d)
{
    node* toinsert=new node(d);
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    toinsert->prev=temp;
    temp->next=toinsert;
    
}
//inserting at any position of the linked list
void insertpos(node* head, int pos, int d)
{
    if(pos==1)
    {
        insert_at_start(head,d);
        return;
    }
    node*temp=new node(d);
    while(temp)
}

//printint the DLL
void print(node* &head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    node* node1=new node(10);
    node* head=node1;

    insert_at_start(head,66);
    insert_at_start(head,55);

    insert_end(head,88);
    insert_end(head,85);

    // cout<<head->data<<endl;
    
    // print(head);

}