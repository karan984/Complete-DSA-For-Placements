#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main()
{
    int w, n, i, j;
    double ans = 0;

    cin>>n>>w;

    int wt[n], val[n];

    for(i=0; i<n; i++){
        cin>>val[i];
    }

    for(i=0; i<n; i++){
        cin>>wt[i];
    }

    vector<pair<double, int>> p;

    for(i=0; i<n; i++){
        p.push_back({(double)val[i]/wt[i], i});
    }

    sort(p.begin(), p.end());

    for(i=n-1; i>=0; i--){
        j=p[i].second;

        if(wt[j]<=w){
            ans=ans+val[j];
            w=w-wt[j];
        }else{
            ans=ans+p[i].first*w;
            w=0;
            break;
        }
    }

    cout<<"Maximum value which can be obtained is "<<ans<<"\n";

}