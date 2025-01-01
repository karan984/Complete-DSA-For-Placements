#include<iostream>
using namespace std;
//This code is written by Karan Mashru
int gcd(int a, int b)
{
    if(b>a){
        swap(a, b);
    }
    int c;
    //This code is written by Karan Mashru

    while(b!=0){
        c=a%b;
        a=b;
        b=c;
    }

    return a;
}
//This code is written by Karan Mashru
int main()
{
    int a, b, ans;
    cin>>a>>b;

    ans=(a*b)/gcd(a, b);

    cout<<ans<<"\n";
}
//This code is written by Karan Mashru