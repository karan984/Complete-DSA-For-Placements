#include<iostream>
using namespace std;
int main()
{
    int n, i, ans=0, count=0, j;
    cin>>n;

    int takeoff[n], landing[n];

    for(i=0; i<n; i++){
        cin>>takeoff[i]>>landing[i];
        landing[i]+=100;
    }

    sort(takeoff, takeoff+n);
    sort(landing, landing+n);

    i=0;
    j=0;

    while(i<n){
        if(takeoff[i]<=landing[j]){
            count++;
            i++;
        }else{
            count--;
            j++;
        }

        ans=max(ans, count);
    }

    cout<<ans;




}