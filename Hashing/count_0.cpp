#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int n, i, j, ans=0, sum=0;
    unordered_map<int, int> mp;

    cin>>n;

    int a[n];

    for(i=0; i<n; i++){
        cin>>a[i];
    }

    for(i=0; i<n; i++){
        sum=sum+a[i];

        if(mp.find(sum)==mp.end()){
            mp[sum]=1;
        }else{
            ans=ans+mp[sum];
            mp[sum]++;
        }
        if(sum==0){
            ans++;
        }
    }

    cout<<"Subarray with sum 0 are "<<ans<<"\n";
}