#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int n, sum, i, j, f, x;

    f=0;
    cin>>n;

    int arr[n];
    unordered_map<int, int> mp;

    for(i=0; i<n; i++)
    {
        cin>>arr[i];

        if(mp.find(arr[i])==mp.end())
            mp[arr[i]]=1;
        else
            mp[arr[i]]++;
    }

    cin>>sum;

    for(i=0; i<n; i++)
    {
        x=sum-arr[i];

        if(mp.find(x)!=mp.end()){
            if(x==arr[i]){
                if(mp[x]>=2){
                    f=1;
                    break;
                }
            }else{
                f=1;
                break;
            }
        }
    }

    if(f==1)
        cout<<"Yes\n";
    else
        cout<<"No\n";
}