#include<iostream>
#include<vector>
using namespace std;
void dfs(int i, int adj[][50], bool vis[], vector<int> &ans, int n){
    ans.push_back(i);
    vis[i]=true;
    int j;

    /*for(int x : adj[i])
    {
        if(vis[x]==false){
            dfs(x, adj, vis, ans);
        }
    }*/

    for(j=0; j<n; j++)
    {
        if(adj[i][j]==1){
            if(vis[j]==false){
                dfs(j, adj, vis, ans, n);
            }
        }
    }
}
int main()
{
    int n, m, u, v, i, j, start;
    cin>>n>>m;

    //vector<int> adj[n];
    int adj[n][50];
    vector<int> ans;
    bool vis[n];

    for(i=0; i<n; i++)
        vis[i]=false;

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            adj[i][j]=0;

    for(i=0; i<m; i++)
    {
        cin>>u>>v;
        //adj[u].push_back(v);
        //adj[v].push_back(u);
        adj[u][v]=1;
        adj[v][u]=1;
    }

    cin>>start;

    dfs(start, adj, vis, ans, n);

    for(i=0; i<n; i++)
    {
        cout<<ans[i]<<" ";
    }
    

}