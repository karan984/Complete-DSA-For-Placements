#include<iostream>
using namespace std;
int main()
{
    string a;
    int n, i, ans=0, j;

    cin>>a;

    n=a.size();

    j=1;

    for(i=n-1; i>=0; i--)
    {
        if(a[i]=='1')
            ans=ans+j;
        
        j=j*2;
    }

    cout<<ans<<"\n";
}