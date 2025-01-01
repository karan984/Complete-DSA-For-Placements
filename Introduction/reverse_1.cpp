#include<iostream>
using namespace std;

int main()
{
    int n, i;

    cin>>n;

    int a[n], b[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        b[i]=a[n-i-1];
    }

    for(i=0; i<n; i++)
    {
        a[i]=b[i];
    }

    cout<<"Array a after reversing is :\n";

    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}