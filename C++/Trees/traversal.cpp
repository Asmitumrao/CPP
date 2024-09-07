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

void preorder(node* root)
{
    if(!root)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root)
{
    if(!root) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void inorder(node* root)
{
    if(!root) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
int main()
{
    node* root=new node(5);
    inorder(root);
    return 0;
}