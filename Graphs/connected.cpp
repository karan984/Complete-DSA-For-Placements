#include<iostream>
#include<vector>
using namespace std;
void dfs(int i, vector<int> adj[], bool vis[])
{
    vis[i]=true;

    for(int u : adj[i])
    {
        if(vis[u]==false){
            dfs(u, adj, vis);
        }
    }
}
int main()
{
    int n, m, ans=0, u, v, i;

    cin>>n>>m;

    vector<int> adj[n];
    bool vis[n];

    for(i=0; i<n; i++)
        vis[i]=false;

    for(i=0; i<m; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(i=0; i<n; i++)
    {
        if(vis[i]==false){
            dfs(i, adj, vis);
            ans++;
        }
    }

    cout<<"No of connected components in the graph are "<<ans<<"\n";
}