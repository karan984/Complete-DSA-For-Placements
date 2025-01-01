#include<iostream>
// This code is written by Karan Mashru
using namespace std;
int main()
{
    int a = -24, b = 38, mod=7;
    //cout<<(a-b)%mod<<"\n";
    //int ans = ((a-b)%mod+mod)%mod;
    // This code is written by Karan Mashru

    a=a%mod;
    b=b%mod;

    cout<<a<<" "<<b<<"\n\n\n";
    int ans = ((a-b)%mod+mod)%mod;

    /*
    ans=0;
    for (i=0; i<n; i++)
    {
        a[i]=a[i]%mod;
        ans=((ans-a[i])%mod+mod)%mod
    }
    */

   int n, i;
   cin>>n;
   int c[n];

   for(i=0; i<n; i++)
   {
    cin>>c[i];
   }
   // This code is written by Karan Mashru

   ans=1;
   for(i=0; i<n; i++)
   {
        c[i]=(c[i])%mod;
        ans=(ans*c[i])%mod;
   }

    cout<<ans<<"\n";
}
// This code is written by Karan Mashru