#include<iostream>
#include<list>
#include<unordered_map>

using namespace std;
template <typename T>

class graph{
    public:
    unordered_map<T,list<T>> adj;

    void addEdges(T v,T u, bool directed)
    {
        adj[v].push_back(u);
        if(directed==0)
            adj[u].push_back(v);
    }

    void printAdjList()
    {
        for(auto i: adj)
        {
            cout<<i.first<<"-->";
            for(T j:i.second )
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }

};

int main()
{
    int n,u,v;
    cout<<"enter number of nodes";
    cin>>n;

    graph<int> g;

    while(n--)
    {
        cout<<"enter edges of the nodes";
        cin>>u>>v;

        //creatig a undirected graph
        g.addEdges(u,v,0);
    }
    g.printAdjList();
    return 0;
}
