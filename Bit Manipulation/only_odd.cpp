#include<iostream>
using namespace std;
int main()
{
    int n, i;

    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
        cin>>a[i];

    int ans = 0;

    for(i=0; i<n; i++)
        ans=ans^a[i];

    cout<<ans<<"\n";
}