#include<iostream>
#include"demo.h"
#include<stack>

using namespace std;

void preorder(node * root)
{
    stack<node*> s;
    cout<<root->data<<" ";
    s.push(root);
    root=root->left;
    while(!s.empty())
    {
        if(root)
        {
            cout<<root->data<<" ";
            s.push(root);
            root=root->left;
        }
        else
        {
            root=(s.top())->right;
            s.pop();
        }
    }

}
void preorderT(node* root)
{
    if (!root) return;
    cout << root->data << " ";
    preorderT(root->left);
    preorderT(root->right);
}
int main()
{
    node* root= new node(50);
    root->left = new node(100);
    root->right = new node(200);
    root ->left->left =new node(300);
    root ->left->right =new node(400);
    root ->right->left =new node(500);
    root ->right->right =new node(600);
    preorder(root);
    cout<<endl;
    preorderT(root);

}