#include<iostream>
using namespace std;
int modular_expo(int x, int n, int mod)
{
    int ans =1;

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
    int a, b, m;

    cin>>a>>m;

    b=modular_expo(a, m-2, m);
     //(x^n)%m

    cout<<b;

}