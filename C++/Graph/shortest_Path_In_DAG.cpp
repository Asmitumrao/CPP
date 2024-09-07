#include<iostream>
#include<unordered_map>
#include<list>
#include<stack>
#include<vector>
#include<climits>
using namespace std;

class graph
{
    unordered_map<int,list<pair<int,int>>> adj;
    public:
    void addEdge(int u,int v, int w){
        pair<int,int> p=make_pair(v,w);
        adj[u].push_back(p);
    }

    void view_adj(){
        for(auto i: adj)
        {
            cout<<i.first<<"--> ";
            for(auto j:i.second){
                cout<<"("<<j.first<<','<<j.second<<") ";
            }
            cout<<endl;
        }
    }
    void dfs(int node, unordered_map<int,int> &visited, stack<int>&s){
        visited[node]=1;
        for(auto neighbour : adj[node])
        {
            if(!visited[neighbour.first])
                dfs(neighbour.first,visited,s);
        }
        s.push(node);
    }

    void getShortestPath(int src,vector<int> &v, stack<int>&s)
    {
        v[src]=0;
        while(!s.empty())
        {
            int p=s.top();
            s.pop();
            if(v[p]!=INT_MAX)
            {
                for(auto neighbour: adj[p])
                {
                    v[neighbour.first]=min(v[neighbour.first],v[p]+neighbour.second);
                }
            }
        }
    }



};

int main()
{
    graph g;
    g.addEdge(0,1,5);
    g.addEdge(0,2,3);
    g.addEdge(1,2,2);
    g.addEdge(1,3,6);
    g.addEdge(2,3,7);
    g.addEdge(2,4,4);
    g.addEdge(2,5,2);
    g.addEdge(3,4,-1);
    g.addEdge(4,5,-2);

    g.view_adj();


    int src=1;
    int n=6;
    stack<int>s;
    unordered_map<int,int> visited;
    vector<int> v(n,INT_MAX);
    //topological sort
    for(int i=0; i<n; i++)
    {
        if(!visited[i])
            g.dfs(i,visited,s);
    }

    //printing topo sort
    // while(!s.empty())
    // {
    //     cout<<s.top()<<" ";
    //     s.pop();

    // }

    //printing the shortest path vector
    g.getShortestPath(src,v,s);

    for(int i: v)
    {
        cout<<i<<" ";
    }






    


}