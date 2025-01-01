#include<iostream>
using namespace std;
int main()
{
    int n, i, j, max_r=0, ans=1;
    cin>>n;

    int l[n], r[n];

    for(i=0; i<n; i++)
    {
        cin>>l[i]>>r[i];
        max_r=max(max_r, r[i]);
    } 

    int count[max_r+2];

    for(i=0; i<=max_r+1; i++)
    {
        count[i]=0;
    }

    for(i=0; i<n; i++)
    {
        count[l[i]]++;
        count[r[i]+1]--;
    }

    for(i=1; i<=max_r+1; i++)
    {
        count[i]=count[i]+count[i-1];
        cout<<count[i]<<" ";
        ans=max(ans, count[i]);
    }
    cout<<"\n";

    cout<<ans<<"\n";
}