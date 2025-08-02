#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int n, i, j, f=0, sum, x;

    unordered_map<int, int> mp;

    cin>>n>>x;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sum=0;

    for(i=0; i<n; i++){
        sum=sum+a[i];

        if(mp.find(sum-x)!=mp.end() || sum==x){
            f=1;
            break;
        }

        mp[sum]=1;
        
    }

    if(f==1)
        cout<<"Subarray with sum "<<x<<" exists\n";
    else
        cout<<"Subarray with sum "<<x<<" doesn't exists\n";
}