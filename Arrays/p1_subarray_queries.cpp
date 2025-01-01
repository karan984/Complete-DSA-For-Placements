#include<iostream>
// This code is written by Karan Mashru
using namespace std;
int main()
{
    int n, q, l, r, sum, i, j;

    cin>>n;
    // This code is written by Karan Mashru
    int a[n], pre_sum[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    // This code is written by Karan Mashru
    pre_sum[0]=a[0];

    for(i=1; i<n; i++)
    {
        pre_sum[i]=pre_sum[i-1]+a[i];
    }

    cin>>q;

    // This code is written by Karan Mashru
    for(j=0; j<q; j++)
    {
        cin>>l>>r;

        /*sum=0;

        for(i=l; i<=r; i++)
        {
            sum=sum+a[i];
        }
        */

       if(l>0)
           sum=pre_sum[r]-pre_sum[l-1];
        else
           sum=pre_sum[r];

    // This code is written by Karan Mashru
        cout<<sum<<"\n";

    }
}
// This code is written by Karan Mashru