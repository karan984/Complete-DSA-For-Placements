#include<iostream>
using namespace std;
//This code is written by Karan Mashru
int gcd(int a, int b)
{
    if(b>a){
        swap(a, b);
    }

    int c;
    while(b!=0){
        c=a%b;
        a=b;
        b=c;
    }
    //This code is written by Karan Mashru
    return a;
}
int lcm(int a, int b)
{
    return (a*b)/gcd(a, b);
}
int main()
{
    //This code is written by Karan Mashru
    int n, i, j, ans;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    ans=a[0];

    //This code is written by Karan Mashru
    for(i=1; i<n; i++)
    {
        ans=lcm(ans, a[i]);
    }

    cout<<ans<<"\n";
}
//This code is written by Karan Mashru