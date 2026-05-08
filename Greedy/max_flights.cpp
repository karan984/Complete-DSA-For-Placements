#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n, ans, i, last;
    vector<pair<int, int>> p;
    cin>>n;

    int takeoff[n], landing[n];

    for(i=0; i<n; i++)
    {
        //0000-2359 //0715, 1435
        cin>>takeoff[i]>>landing[i];
        landing[i]+=100;

        p.push_back({landing[i], takeoff[i]});
    }

    sort(p.begin(), p.end());

    ans=1;
    last=p[0].first;

    for(i=1; i<n; i++)
    {
        if(p[i].second>last){
            ans++;
            last=p[i].first;
        }
    }

    cout<<ans<<"\n";




}