#include<iostream>
using namespace std;
int main()
{
    int n, ans;

    cin>>n;

    ans=(n&(-n));

    cout<<ans<<"\n";
}