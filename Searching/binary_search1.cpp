#include<iostream>
using namespace std;
int main()
{
    int n, i, l, h, x, m, ans=-1;
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
            ans=m;
            break;
        }

        if(a[m]>x){
            h=m-1;
        }else{
            l=m+1;
        }
    }

    cout<<ans;
}