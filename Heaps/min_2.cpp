#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n, k, i, j;
    cin>>n>>k;

    int a[n];

    for(i=0; i<n; i++)
        cin>>a[i];

    vector<int> ans;

    for(i=0; i<k; i++)
        ans.push_back(a[i]);

    make_heap(ans.begin(), ans.end());

    for(i=k; i<n; i++)
    {
        if(ans.front()>a[i]){
            pop_heap(ans.begin(),ans.end());
            ans.pop_back();

            ans.push_back(a[i]);
            push_heap(ans.begin(), ans.end());
        }
    }

    for(i=0; i<k; i++)
        cout<<ans[i]<<" ";
}