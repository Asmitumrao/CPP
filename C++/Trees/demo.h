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
        this->data = x;
        this->left = NULL;
        this->right = NULL;
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
    static int idx = 0;
    if (st > end)
        return NULL;
    
    node* root = new node(pre[idx]);
    int pos = search(in, st, end, pre[idx]);
    idx++;
    if (st == end)
        return root;
    root->left = builtTree(pre, in, st, pos-1);
    root->right = builtTree(pre, in, pos+1, end);

    return root;
}

void inorderT(node* root)
{
    if (!root) return;
    inorderT(root->left);
    cout << root->data << " ";
    inorderT(root->right);
}


