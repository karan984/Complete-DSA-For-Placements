#include<iostream>
using namespace std;
int main()
{
    int n, m, u, v, i, j;

    cin>>n>>m;

    int adj[n][n];

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            adj[i][j]=0;

    for(i=0; i<m; i++)
    {
        cin>>u>>v;

        adj[u][v]=1;
        adj[v][u]=1;
    }

    for(i=0; i<n; i++)
    {
        cout<<"Nodes adjacent to "<<i<<" are: ";
        for(j=0; j<n; j++)
        {
            if(adj[i][j]==1){
                cout<<j<<" ";
            }
        }
        cout<<"\n";
    }

}