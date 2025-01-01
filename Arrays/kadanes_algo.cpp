#include<iostream>
// This code is written by Karan Mashru
using namespace std;
int main()
{
    int n, i, j, l, r, ans_l, ans_r;
    long sum, ans;
    cin>>n;

    int a[n];

    // This code is written by Karan Mashru
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    // This code is written by Karan Mashru
    ans=a[0];
    ans_l=0;
    ans_r=0;

    sum=0;
    l=0;

    // This code is written by Karan Mashru
    for(i=0; i<n; i++)
    {
        r=i;
        sum=sum+a[i];
        
        if(sum>ans){
            ans=sum;
            ans_l=l;
            ans_r=r;
        }

        //cout<<ans<<" ";
        if(sum<=0){
            sum=0;
            l=i+1;
        }
    }

    // This code is written by Karan Mashru
    cout<<ans<<"\n";
    cout<<ans_l<<" "<<ans_r<<"\n";
}