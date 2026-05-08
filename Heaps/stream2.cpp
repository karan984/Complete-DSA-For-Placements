#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int n, i, j;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
        cin>>a[i];

    priority_queue<int> q1;
    priority_queue<int, vector<int>, greater<int> > q2;

    for(i=0; i<n; i++)
    {
        q1.push(a[i]);
        
        q2.push(q1.top());
        q1.pop();

        if(q2.size()>q1.size()){
            q1.push(q2.top());
            q2.pop();
        }

        if(q1.size()==q2.size()){
            cout<<((q1.top()+q2.top())/2.0)<<" ";
        }else{
            cout<<q1.top()<<" ";
        }
    }
}