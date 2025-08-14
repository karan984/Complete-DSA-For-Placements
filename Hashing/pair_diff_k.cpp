#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int n, i, k, ans=0;

    cin>>n>>k;

    int a[n];
    unordered_map<int, int> mp;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        if(mp.find(a[i]-k)!=mp.end()){
            ans=ans+mp[a[i]-k];
        }
        if(k !=0 && mp.find(a[i]+k)!=mp.end()){
            ans=ans+mp[a[i]+k];
        }
        if(mp.find(a[i])==mp.end()){
            mp[a[i]]=1;
        }else{
            mp[a[i]]++;
        }
    }

    cout<<"No of pairs in the array with absolute diff "<<k<<" are "<<ans<<"\n";
}