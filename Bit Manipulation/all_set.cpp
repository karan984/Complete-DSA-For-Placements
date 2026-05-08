#include<iostream>
using namespace std;
int main()
{
    int n, x;

    cin>>n>>x;

    if((n&x)==x)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}