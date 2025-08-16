#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n, m, i, j, u, v, w;

    cin>>n>>m;
    vector<pair<int, int>> adj[n];

    for(i=0; i<m; i++)
    {
        cin>>u>>v>>w;
        adj[u].push_back({v, w});
        //adj[v].push_back(u);
    }

    for(i=0; i<n; i++)
    {
        cout<<"Nodes adjacent to "<<i<<" are: ";
        /*int n1=adj[i].size();

        for(j=0; j<n1; j++)
        {
            cout<<adj[i][j]<<" ";
        }*/
        
        for(auto x : adj[i]){
            cout<<x.first<<" with edges weight "<<x.second<<", ";
        }
        cout<<"\n";
    }
}