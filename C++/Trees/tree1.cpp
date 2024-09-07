#include<iostream>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;


    //constructor

    node(int x)
    {
        this->data=x;
        this->left=NULL;
        this->right=NULL;
    }
};

int main()
{
    node* root=new node(1);                        /*       1                       */       
    root->left= new node(2);                       /*      / \                      */      
    root->right = new node(3);                     /*     2   3                     */             
    return 0;

}