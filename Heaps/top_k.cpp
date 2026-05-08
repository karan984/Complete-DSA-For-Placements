#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int> > q;

    int n, i, k;

    cin>>n>>k;

    int a[n];

    for(i=0; i<n; i++)
        cin>>a[i];

    for(i=0; i<k; i++){
        q.push(a[i]);
    }

    for(i=k; i<n; i++)
    {
        if(a[i]>q.top()){
            q.pop();
            q.push(a[i]);
        }
    }

    while(q.empty()==false){
        cout<<q.top()<<" ";
        q.pop();
    }
}