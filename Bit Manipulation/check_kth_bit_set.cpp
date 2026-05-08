#include<iostream>
using namespace std;
int main()
{
    int n, k;

    cin>>n>>k;

    if((n&(1<<k))==(1<<k))
        cout<<"Kth bit is set in n\n";
    else
        cout<<"Kth bit is not set in n\n";
}