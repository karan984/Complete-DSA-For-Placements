#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n, i, j;
    stack<int> s;
    cin>>n;

    int a[n], ns[n], ps[n], ans=0;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        ns[i]=n;
        ps[i]=-1;
    }

    for(i=n-1; i>=0; i--)
    {
        while(s.empty()==false && a[s.top()]>=a[i]){
            s.pop();
        }

        if(s.empty()==false){
            ns[i]=s.top();
        }

        s.push(i);
    }

    while(s.empty()==false){
        s.pop();
    }

    for(i=0; i<n; i++)
    {
        while(s.empty()==false && a[s.top()]>=a[i]){
            s.pop();
        }

        if(s.empty()==false){
            ps[i]=s.top();
        }

        s.push(i);
    }

    for(i=0; i<n; i++)
    {
        ans=max(ans, a[i]*(ns[i]-ps[i]-1));
    }

    cout<<ans<<"\n";


}