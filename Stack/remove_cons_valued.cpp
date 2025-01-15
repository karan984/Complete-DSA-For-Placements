#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n, i, j;
    stack<int> s;

    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        if(s.empty()==true){
            s.push(a[i]);
        }else{
            if(s.top()+1==a[i]){
                s.pop();
            }else{
                s.push(a[i]);
            }
        }
    }

    vector<int> ans;

    while(s.empty()==false){
        ans.push_back(s.top());
        s.pop();
    }

    reverse(ans.begin(), ans.end());

    for(int x : ans){
        cout<<x<<" ";
    }
}