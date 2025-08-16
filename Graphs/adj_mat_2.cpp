#include<iostream>
using namespace std;
int main()
{
    int n, m, u, v, i, j, w;

    cin>>n>>m;

    int adj[n+1][n+1];

    for(i=0; i<=n; i++)
        for(j=0; j<=n; j++)
            adj[i][j]=-1;

    for(i=0; i<m; i++)
    {
        cin>>u>>v>>w;

        adj[u][v]=w;
        //adj[v][u]=1;
    }

    for(i=1; i<=n; i++)
    {
        cout<<"Nodes adjacent to "<<i<<" are: ";
        for(j=1; j<=n; j++)
        {
            if(adj[i][j]!=-1){
                cout<<j<<" with edge weight "<<adj[i][j]<<", ";
            }
        }
        cout<<"\n";
    }

}