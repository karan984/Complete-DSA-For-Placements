#include<iostream>
using namespace std;
int main()
{
    string ans="";
    int n;

    cin>>n;

    while(n>0){
        if((n%2)==1)
            ans=ans+'1';
        else
            ans=ans+'0';

        n=n/2;
    }

    reverse(ans.begin(), ans.end());

    cout<<ans<<"\n";

}