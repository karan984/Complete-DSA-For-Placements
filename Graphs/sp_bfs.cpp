#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void bfs(int src, vector<int> adj[], bool vis[], int dis[])
{
    queue<int> q;
    int u;
    q.push(src);
    vis[src]=true;
    dis[src]=0;

    while(q.empty()==false){
        u=q.front();
        q.pop();

        //ans.push_back(u);

        for(int v : adj[u])
        {
            if(vis[v]==false){
                q.push(v);
                vis[v]=true;
                dis[v]=dis[u]+1;
            }
        }
    }
}
int main()
{
    int n, m, u, v, i, j, start, src, des;
    cin>>n>>m;

    vector<int> adj[n];
    //vector<int> ans;
    bool vis[n];
    int dis[n];

    for(i=0; i<n; i++) {
        vis[i]=false;
        dis[i]=100000000;
    }

    for(i=0; i<m; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cin>>src>>des;

    bfs(src, adj, vis, dis);

    for(i=0; i<n; i++)
    {
        cout<<"Distance from source node to "<<i<<" is : "<<dis[i]<<"\n";
    }

    
}