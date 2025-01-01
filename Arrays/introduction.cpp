#include<iostream>
using namespace std;

int main()
{
    int n, i, j;

    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cin>>j;

    cout<<a[j-1]<<"\n";
}