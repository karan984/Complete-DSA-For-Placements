#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int n, i, j, ansc=0;
    string ans = "";
    unordered_map<string, int> mp;
    unordered_map<string, int>::iterator it;

    cin>>n;

    string arr[n];

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(i=0; i<n; i++)
    {
        if(mp.find(arr[i])==mp.end()){
            mp[arr[i]]=1;
        }else{
            mp[arr[i]]++;
        }
    }

    for(it=mp.begin(); it!=mp.end(); it++){
        if(it->second>ansc){
            ansc=it->second;
            ans=it->first;
        }else if(it->second==ansc){
            if(it->first<ans){
                ans=it->first;
            }
        }
    }

    cout<<"Winner of the election is "<<ans<<"\n";
}