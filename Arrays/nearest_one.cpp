#include<iostream>
// This code is written by Karan Mashru
using namespace std;
int main()
{
    int n, i, j;

    cin>>n;

    // This code is written by Karan Mashru
    int a[n], pre[n], suf[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    // This code is written by Karan Mashru
    if(a[0]==1){
        pre[0]=0;
    }else{
        pre[0]=n;
    }

    for(i=1; i<n; i++)
    {
        if(a[i]==1){
            pre[i]=0;
        }else{
            pre[i]=pre[i-1]+1;
        }
    }

    // This code is written by Karan Mashru
    if(a[n-1]==1){
        suf[n-1]=0;
    }else{
        suf[n-1]=n;
    }

    for(i=n-2; i>=0; i--)
    {
        if(a[i]==1){
            suf[i]=0;
        }else{
            suf[i]=suf[i+1]+1;
        }
    }

    // This code is written by Karan Mashru
    for(i=0; i<n; i++){
        cout<<pre[i]<<" ";
    }
    cout<<"\n";
    for(i=0; i<n; i++){
        cout<<suf[i]<<" ";
    }
    cout<<"\n";

    for(i=0; i<n; i++)
    {
        cout<<min(pre[i], suf[i])<<" ";
    }
    // This code is written by Karan Mashru
}