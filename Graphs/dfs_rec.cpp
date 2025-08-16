#include<iostream>
#include<vector>
using namespace std;
void dfs(int i, vector<int> adj[], bool vis[], vector<int> &ans){
    ans.push_back(i);
    vis[i]=true;

    for(int x : adj[i])
    {
        if(vis[x]==false){
            dfs(x, adj, vis, ans);
        }
    }
}
int main()
{
    int n, m, u, v, i, j, start;
    cin>>n>>m;

    vector<int> adj[n];
    vector<int> ans;
    bool vis[n];

    for(i=0; i<n; i++)
        vis[i]=false;

    for(i=0; i<m; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cin>>start;

    dfs(start, adj, vis, ans);

    for(i=0; i<n; i++)
    {
        cout<<ans[i]<<" ";
    }
    

}