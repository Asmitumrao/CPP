#include<iostream>
using namespace std;
struct node
{
    int data;
    node * left;
    node * right;

    //constructor
    node(int x)
    {
        this->data=x;
        this->left=NULL;
        this->right=NULL;
    }

};

int count_node(node* root)
{
    if(!root)
        return 0;
    return count_node(root->left)+count_node(root->right)+1;

}
int sumNode(node* root)
{
    if(!root)
        return 0;
    return sumNode(root->left)+sumNode(root->right)+root->data;

}

int main()
{
    node* root =new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->right->right = new node(50); 
    root->left->right = new node(49);
    cout<<count_node(root)<<endl;
    cout<<sumNode(root)<<endl;
    return 0;
}