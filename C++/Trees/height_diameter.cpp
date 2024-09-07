#include<iostream>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;

    //constructor
    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
}
