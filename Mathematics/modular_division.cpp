#include<iostream>
using namespace std;
int modulo_expo(int x, int n, int mod) //(x^n)%mod
{
    int ans=1;

    while(n>0)
    {
        if((n%2)==1){
            ans=(ans*x)%mod;
        }

        x=(x*x)%mod;
        n=n/2;
    }

    return ans;
}
int main()
{
    int a, b, mod=7;

    cin>>a>>b;

    int ans = ((a%mod)*modulo_expo(b, mod-2, mod))%mod;

    cout<<ans;
}