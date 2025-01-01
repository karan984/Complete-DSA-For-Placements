#include<iostream>
using namespace std;

int main()
{
    int t, n, i, sum;

    cin>>t;

    for(;t--;)
    {
        cin>>n;

        int a[n];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sum=0;

        for(i=0; i<n; i++)
        {
            sum=sum+a[i];
        }

        cout<<sum<<"\n";
    }
}