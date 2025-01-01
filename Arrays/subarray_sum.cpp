#include<iostream>
//This code is written by Karan Mashru
using namespace std;
int main()
{
    int n, s, l, r, f=0, i, sum;

    cin>>n;

    //This code is written by Karan Mashru
    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    //This code is written by Karan Mashru
    cin>>s;

    l=0;
    sum=0;

    //This code is written by Karan Mashru
    for(r=0; r<n; r++)
    {
        sum=sum+a[r];

        while(sum>s){
            sum=sum-a[l];
            l++;
        }

        if(sum==s && l<=r){
            f=1;
            break;
        }
    }

    //This code is written by Karan Mashru
    if(f==1){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

}
//This code is written by Karan Mashru