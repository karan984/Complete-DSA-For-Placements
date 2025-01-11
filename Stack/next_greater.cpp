#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n, i, j;
    stack<int> s;

    cin>>n;
    int a[n], ans[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=n-1; i>=0; i--)
    {
        while(s.empty()==false && s.top()<=a[i]){
            s.pop();
        }

        if(s.empty()==false){
            ans[i]=s.top();
        }else{
            ans[i]=-1;
        }

        s.push(a[i]);
    }

    for(i=0; i<n; i++)
    {
        cout<<ans[i]<<" ";
    }
}