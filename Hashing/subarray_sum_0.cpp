#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int n, i, j, f=0, sum;

    unordered_map<int, int> mp;

    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sum=0;

    for(i=0; i<n; i++){
        sum=sum+a[i];

        if(sum==0){
            f=1;
            break;
        }
        if(mp.find(sum)!=mp.end()){
            f=1;
            break;
        }else{
            mp[sum]=1;
        }
    }

    if(f==1)
        cout<<"Subarray with sum 0 exists\n";
    else
        cout<<"Subarray with sum 0 doesn't exists\n";
}