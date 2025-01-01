#include<iostream>
using namespace std;
//This code is written by Karan Mashru
int main()
{
    int n, i, ans=1, mod=1000000007;

    cin>>n;

    //This code is written by Karan Mashru
    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        ans=(ans*a[i])%mod;
        //cout<<ans<<"\n";
    }

    cout<<ans<<"\n";
}
//This code is written by Karan Mashru