#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int n, q, i, j, x, ans;
    //int c[1000];
    unordered_map<int, int> mp;
    cin>>n>>q;

    int arr[n];

    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    /*for(i=0; i<1000; i++){
        c[i]=0;
    }*/

    for(i=0; i<n; i++){
        //c[arr[i]]++;
        if(mp.find(arr[i])==mp.end()){
            mp[arr[i]]=1;
        }else{
            mp[arr[i]]++;
        }
    }

    for(i=0; i<q; i++)
    {
        cin>>x;
        ans = mp.find(x)==mp.end() ? 0 : mp[x];
        cout<<"Frequency of "<<x<<" in the array is "<<ans<<"\n";
    }

}