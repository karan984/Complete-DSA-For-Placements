#include<iostream>
using namespace std;
int main()
{
    int n, x, i, ans=-1, l, h, m;

    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cin>>x;

    l=0;
    h=n-1;

    while(l<=h){
        m=(l+h)/2;
        if(a[m]==x){
            ans=a[m];
            break;
        }else if(a[m]<x){
            ans=a[m];
            l=m+1;
        }else{
            h=m-1;
        }
    }

    cout<<ans;
}