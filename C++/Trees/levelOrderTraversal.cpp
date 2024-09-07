#include<iostream>
#include<queue>
#include<stack>
#include"demo.h"
using namespace std;


void levelorder(node* root)
{
    if(!root)
        return;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* curr =q.front();
        q.pop();
        if(curr)
        {
            cout<<curr->data<<" ";
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
        }
        else
        {
            cout<<endl;
            if(!q.empty())
                q.push(NULL);
        }
    }

}
//*****************************************************************************************

void reverseOrderTraversal(node* root)
{
    if(!root)
        return;
    queue<node*>q;
    stack<int>s;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* node=q.front();
        q.pop();
        if(node)
        {
            s.push(node->data);
            if(node->right) q.push(node->right);
            if(node->left) q.push(node->left);
            
        }
        else
        {
            if(!q.empty())
                q.push(NULL);
        }
    }
    while(!s.empty()){
        int x=s.top();
        s.pop();
        cout<<x<<" ";
    }

}


//*****************************************************************************************
int sumatK(node*root,int k)
{
    if(!root)
        return -1; 
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int level=0;
    int s=0;

    while(!q.empty())
    {
        node* curr =q.front();
        q.pop();
        if(curr)
        {
            if(level==k)
                s+=curr->data;
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
        }
        else
        {
            if(!q.empty())
             {   level++;
                q.push(NULL);}
        }      
    }
    return s;
}
int main()
{
    int preorder[]= {1,2,4,5,3,6};
    int inorder[]= {4,2,5,1,3,6};
    // cout<<"done";
    node* root=builtTree(preorder,inorder,0,5);
    levelorder(root);
    reverseOrderTraversal(root);
    cout<<endl<< sumatK(root,0);
    
}
