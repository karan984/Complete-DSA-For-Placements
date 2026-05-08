#include<iostream>
using namespace std;
int main()
{
    int n, i, maxp=0, ans=0;

    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    maxp=a[n-1];
    for(i=n-2; i>=0; i--)
    {
        ans=max(ans, maxp-a[i]);
        maxp=max(maxp, a[i]);
    }
    cout<<ans<<"\n";
}