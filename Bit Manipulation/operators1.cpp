#include<iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    cout<<(a&b)<<"\n";

    cout<<(a&b&c)<<"\n";

    cout<<(a|b)<<"\n";

    cout<<(a|b|c)<<"\n";
    cout<<(a|b|c|d)<<"\n";
}