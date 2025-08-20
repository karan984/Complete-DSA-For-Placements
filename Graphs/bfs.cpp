#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void bfs(int start, vector<int> adj[], bool vis[], vector<int>& ans)
{
    queue<int> q;
    int u;
    q.push(start);
    vis[start]=true;

    while(q.empty()==false){
        u=q.front();
        q.pop();

        ans.push_back(u);

        for(int v : adj[u])
        {
            if(vis[v]==false){
                q.push(v);
                vis[v]=true;
            }
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

    bfs(start, adj, vis, ans);

    for(i=0; i<n; i++)
    {
        cout<<ans[i]<<" ";
    }
}