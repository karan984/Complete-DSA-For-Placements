#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    int n, i;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        if(s.empty()==true){
            cout<<a[i]<<" ";
            s.push(a[i]);
        }else{
            if(s.top()!=a[i]){
                cout<<a[i]<<" ";
                s.push(a[i]);
            }
        }
    }
}