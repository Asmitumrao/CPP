#include<iostream>

using namespace std;
//linked list
class node{
    public:
    int data;
    node* next;

    //constrictor
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    //destructor
    ~node()
    {
        int value=this->data;
        // meromry free
        // cout<<next<<endl;
        if(this->next !=NULL){
            delete next;
            this->next=NULL;
            cout<<"hello this is working now"<<endl;
        } 
        cout<<"memory is free for node with data"<< value <<endl;
    }
};
//insert in the head
void insertInHead(node* &head,int d)
{
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}

//insert in tail
void insertInTail(node* &head,int d)
{
    node* toInsert=new node(d);
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=toInsert;

}

//inserting ant any given position
void insertPos(node*&head,int d, int pos)
{
    if(pos==1)
    {
        insertInHead(head,d);
        return ;
    }
    else
    {
        int cnt=1;
        node*toinsert=new node(d);
        node* temp=head;
        while(cnt<pos-1)
        {
            temp=temp->next;
            cnt++;
        }
        if(temp==NULL)
        {
            insertInHead(head,d);
        }
        else
        {
            toinsert->next=temp->next;
            temp->next=toinsert;
        }
    }
}

//printing an LL
void printNode(node* &head)
{
    if(head == NULL) {
    cout << "List is empty "<< endl;
    return ;
    }
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//deleting first or start node)
void delete_start(node* &head)
{
    node* temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;

}
//deleting  node at any position
void delete_position(node* &head,int pos)
{
    if(pos==1)
    {
        delete_start(head);
        return;
    }
    node*prev=NULL;
    node*curr=head;
    int cnt=1;
    while(cnt<pos)
    {
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
    
}
int main()
{ 
    node* node1=new node(20);
    node* head=node1;
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    //printing an LL
    printNode(head);
   

    //inserting an node in the LL
    insertInHead(head,30);

    //printing LL after inserting in the starting
    printNode(head);

    //inserting at the end of the LL
    insertInTail(head,90);

    // //printing after inserting at the end of the LL
    // printNode(head);

    //inserting at any given position
    insertPos(head,77,3);

    // //printing after inserting at a given position
    // printNode(head);

    // //delteing the first Node
    // delete_start(head);

    // //printing the LL after deletion of first node
    // printNode(head);

    insertPos(head,45,3);
    insertPos(head,46,3);

    printNode(head);

    //delteing the node at any position
    delete_position(head,3);
    

    //printing the LL after deletion
    printNode(head);

    return 0;

}

