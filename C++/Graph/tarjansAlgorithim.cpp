#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>
using namespace std;
// dfs(i,-1,disc,low,timer,adj,ap,vis);
void dfs(int node,int parent,vector<int>&disc,vector<int>&low,int timer, unordered_map<int,list<int>>&adj,vector<int>&ap,vector<bool>&vis)
{
    vis[node]=true;
    disc[node]=low[node]=timer++;
    int child=0;
    for(int nbr:adj[node])
    {
        if(nbr == parent)
            continue;
        if(vis[nbr]==0)
        {
            dfs(nbr,node,disc,low,timer,adj,ap,vis);
            low[node]=min(low[node],low[nbr]);
            if(low[nbr]>=disc[node] && parent !=-1)
                ap[node]=1;
            child++;
        }
        else
        {
            // backedge
            low[node]=min(low[node],disc[nbr]);

        }
    }
    if(parent==-1 && child>1)
        ap[node]=1;
}
int main()
{
    int n=5; // number of nodes
    int e=5; // number of edges

    vector<pair<int,int>>edges;

    edges.push_back({0,3});
    edges.push_back({3,4});
    edges.push_back({0,4});
    edges.push_back({0,1});
    edges.push_back({1,2});

    // adj list
    unordered_map<int,list<int>> adj;
    for(int i=0; i<edges.size(); i++)
    {
        int u=edges[i].first;
        int v=edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // timer =0
    int timer=0;


    // creating the data structures;
    vector<int>disc(n,-1); // dicovery time
    vector<int>low(n,-1);   // lowest discoery time
    vector<int> ap(n,0);    // mapping of articulation points    
    vector<bool> vis(n,0);   

    // dfs
    for(int i=0; i<n; i++)
    {
        if(vis[i]==0)
        {
            dfs(i,-1,disc,low,timer,adj,ap,vis);
        }
    }  
    cout<<" articultion points :"<<endl;
    for(int i=0; i<n; i++)
    {
        if(ap[i]==1)
            cout<<i<<" ";
    }
    return 0;



}  