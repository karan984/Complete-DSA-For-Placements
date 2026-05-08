#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
    int n, i, k;

    cin>>n>>k;

    int a[n];

    for(i=0; i<n; i++)
        cin>>a[i];

    vector<int> ans;

    for(i=0; i<k; i++)
        ans.push_back(a[i]);
    
    make_heap(ans.begin(), ans.end(), greater<int>());

    for(i=k; i<n; i++)
    {
        if(a[i]>ans.front()){
            ans.push_back(a[i]);
            push_heap(ans.begin(), ans.end(), greater<int>());

            pop_heap(ans.begin(), ans.end(), greater<int>());
            ans.pop_back();
        }
    }

    for(int x : ans){
        cout<<x<<" ";
    }
    
}