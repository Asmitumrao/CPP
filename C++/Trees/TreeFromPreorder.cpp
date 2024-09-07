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
int search(int* in, int st, int end, int curr)
{
    for (int i = st; i <= end; ++i)
        if (in[i] == curr)
            return i;
    return -1;
}


node* builtTree(int * pre, int * in ,int st ,int end)
{
    static int idx=0;
    if(st>end)
        return NULL;
    int curr=pre[idx];
    idx++;
    node* root=new node(curr);
    if(st==end)
        return root;

    int pos=search(in,st,end,curr);
    root->left=builtTree(pre,in,st,pos-1);
    root->right=builtTree(pre,in,pos+1,end);

    return root;
}


void inorderT(node* root)
{
    if(!root) return;
    inorderT(root->left);
    cout<<root->data<<" ";
    inorderT(root->right);

}



int main()
{
    int preorder[]= {1,2,4,3,5};
    int inorder[]= {4,2,1,5,3};
    // cout<<"done";
    node* root=builtTree(preorder,inorder,0,4);
    // cout<<"done";
    inorderT(root);
    // cout<<"done";
    return 0;
    
}