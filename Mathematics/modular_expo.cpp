#include<iostream>
using namespace std;
int main()
{
    int x, n, ans=1, mod=13;

    cin>>x>>n;

    while(n>0)
    {
        if((n%2)==1){
            ans=(ans*x)%mod;
        }

        x=(x*x)%mod;
        n=n/2;
    }

    cout<<ans<<"\n";
}