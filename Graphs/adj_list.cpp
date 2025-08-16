#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n, m, i, j, u, v, w;

    cin>>n>>m;
    vector<int> adj[n+1];

    for(i=0; i<m; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(i=1; i<=n; i++)
    {
        cout<<"Nodes adjacent to "<<i<<" are: ";
        /*int n1=adj[i].size();

        for(j=0; j<n1; j++)
        {
            cout<<adj[i][j]<<" ";
        }*/

        for(int x : adj[i]){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
}