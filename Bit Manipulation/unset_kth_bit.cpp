#include<iostream>
using namespace std;
int main()
{
    int n, k, ans;

    cin>>n>>k;

    ans=(n&(~(1<<k)));

    cout<<ans<<"\n";
}