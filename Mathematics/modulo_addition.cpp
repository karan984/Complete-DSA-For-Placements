//2147483647
#include<iostream>
using namespace std;
//This code is written by Karan Mashru
int main()
{
    int n, i, ans=0, mod=1000000007;

    cin>>n;

    int a[n];
    //This code is written by Karan Mashru

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }


    for(i=0; i<n; i++)
    {
        ans=(ans+(a[i]%mod))%mod;
        //ans=(ans+a[i])%mod
        //[0, mod-1]
    }
    //This code is written by Karan Mashru

   
    cout<<ans<<"\n";
}
//This code is written by Karan Mashru