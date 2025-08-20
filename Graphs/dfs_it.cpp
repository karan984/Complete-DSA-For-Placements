#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void dfs(int i, vector<int> adj[], bool vis[], vector<int> &ans, int start){
    stack<int> s;
    s.push(start);

    while(s.empty()==false){
        int u = s.top();
        s.pop();

        if(vis[u]==true){
            continue;
        }

        vis[u]=true;
        ans.push_back(u);

        for(int x : adj[u])
        {
            if(vis[x]==false){
                s.push(x);
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

    dfs(start, adj, vis, ans, start);

    for(i=0; i<n; i++)
    {
        cout<<ans[i]<<" ";
    }
    

}