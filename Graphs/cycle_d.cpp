#include<iostream>
#include<vector>
using namespace std;
bool dfs(int i, vector<int> adj[], bool vis[], bool walk[])
{
    vis[i]=true;
    walk[i]=true;

    for(int x : adj[i])
    {
        if(vis[x]==false){
            if(dfs(x, adj, vis, walk)==true){
                return true;
            }
        }else{
            if(walk[x]==true){
                return true;
            }
        }
    }
    walk[i]=false;
}
int main()
{
    int n, m, u, v, i, j;
    bool ans = false;
    cin>>n>>m;


    vector<int> adj[n];
    bool vis[n];
    bool walk[n];

    for(i=0; i<n; i++)
        walk[i]=vis[i]=false;

    for(i=0; i<m; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        //adj[v].push_back(u);
    }

    for(i=0; i<n; i++)
    {
        if(vis[i]==false){
            ans=dfs(i, adj, vis, walk);
            if(ans==true)
                break;
        }
    }
    

    if(ans==false)
        cout<<"No cycles\n";
    else
        cout<<"Cycle exists\n";

    
}