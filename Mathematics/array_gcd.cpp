#include<iostream>
// This code is written by Karan Mashru
using namespace std;
int gcd(int a, int b)
{
    if(b>a){
        swap(a, b);
    }
    //This code is written by Karan Mashru
    int c;
    while(b!=0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    //This code is written by Karan Mashru
    return a;
}
int main()
{
    int n, i, j, ans;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    //This code is written by Karan Mashru
    ans=a[0];

    for(i=1; i<n; i++)
    {
        ans=gcd(ans, a[i]);
    }

    cout<<ans<<"\n";
}
//This code is written by Karan Mashru