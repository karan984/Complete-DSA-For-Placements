#include<iostream>
#include<unordered_map>
using namespace std; 
int main()
{
    int n, x, ans=0, i, j, sum=0;
    unordered_map<int, int> mp;

    cin>>n>>x;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        sum=sum+a[i];

        if(mp.find(sum-x)!=mp.end()){
            ans=ans+mp[sum-x];
        }
        if(sum==x){
            ans++;
        }

        if(mp.find(sum)==mp.end()){
            mp[sum]=1;
        }else{
            mp[sum]++;
        }
    }

    cout<<"No of subarrays with sum "<<x<<" are "<<ans<<"\n";

}