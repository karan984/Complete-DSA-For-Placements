#include<iostream>
using namespace std;
int main()
{
    int n, k;

    cin>>n>>k;

    int ans = (n^(1<<k));

    cout<<ans<<"\n";
}