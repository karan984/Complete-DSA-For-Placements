#include<iostream>
// This code is written by Karan Mashru
using namespace std;
int gcd(int a, int b)
{
    if(b==0){
        return a;
        // This code is written by Karan Mashru
    }else{
        return gcd(b, a%b);
    }
}
int main()
// This code is written by Karan Mashru
{
    int a, b, c, g;

    cin>>a>>b;
    // This code is written by Karan Mashru
    if(b>a){
        swap(a, b);
    }

    /*while(b!=0){
        c=a%b;
        a=b;
        b=c;
    }

    cout<<a<<"\n";
    */

    g=gcd(a, b);
    cout<<g;
// This code is written by Karan Mashru
}