#include<iostream>
#include<vector>
using namespace std;
bool dfs(int i, vector<int> adj[], bool vis[], int prev)
{
    vis[i]=true;

    for(int x : adj[i])
    {
        if(vis[x]==false){
            if(dfs(x, adj, vis, i)==true){
                return true;
            }
        }else{
            if(x!=prev){
                return true;
            }
        }
    }
}
int main()
{
    int n, m, u, v, i, j;
    bool ans = false;
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
            ans=dfs(i, adj, vis, -1);
            if(ans==true)
                break;
        }
    }
    

    if(ans==false)
        cout<<"No cycles\n";
    else
        cout<<"Cycle exists\n";

    
}