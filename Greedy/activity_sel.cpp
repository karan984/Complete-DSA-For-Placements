#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n, s, e, i, ans=0;
    int last=-1;

    cin>>n;

    int start[n];
    int end[n];

    for(i=0; i<n; i++){
        cin>>start[i]>>end[i];
    }

    vector<pair<int, int>> p;

    for(i=0; i<n; i++){
        p.push_back({end[i], start[i]});
    }

    sort(p.begin(), p.end());

    for(i=0; i<n; i++)
    {
        if(p[i].second>last){
            ans++;
            last=p[i].first;
        }
    }

    cout<<"Maximum number of activities that can be performed is "<<ans<<"\n";
}