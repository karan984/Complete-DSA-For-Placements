#include<iostream>
using namespace std;
int main()
{
    int n, c;

    cin>>n;

    c=0;

    while(n>0){
        if((n&1)==1)
            c++;
        n=n/2;
    }

    cout<<c<<"\n";
}