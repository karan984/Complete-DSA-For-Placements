//This code is written by Karan Mashru
#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cin>>n;

    //This code is written by Karan Mashru
    int a[n];
    int pre_sum[n], pre_max[n], suf_sum[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    pre_sum[0]=a[0];

    for(i=1; i<n; i++)
    {
        pre_sum[i]=pre_sum[i-1]+a[i];
    }

    //This code is written by Karan Mashru
    pre_max[0]=a[0];

    for(i=1; i<n; i++)
    {
        pre_max[i]=max(pre_max[i-1], a[i]);
    }

    suf_sum[n-1]=a[n-1];

    //This code is written by Karan Mashru
    for(i=n-2; i>=0; i--)
    {
        suf_sum[i]=suf_sum[i+1]+a[i];
    }

    for(i=n-1; i>=0; i--)
    {
        cout<<"The sum of suffix starting at index "<<i<<" is "<<suf_sum[i]<<"\n";
    }
}
//This code is written by Karan Mashru