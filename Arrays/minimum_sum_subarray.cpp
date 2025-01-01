#include<iostream>
// This code is written by Karan Mashru
using namespace std;
int main()
{
    int n, i,j, p, sum, ans;

    // This code is written by Karan Mashru
    cin>>n;

    int a[n];

    // This code is written by Karan Mashru
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cin>>p;

    ans=0;

    // This code is written by Karan Mashru
    for(i=0; i<p; i++)
    {
        ans=ans+a[i];
    }
    sum=ans;

    for(i=p; i<n; i++)
    {
        sum=sum-a[i-p]+a[i];
        ans=min(ans, sum);
    }

    // This code is written by Karan Mashru
    cout<<ans<<"\n";
}
// This code is written by Karan Mashru