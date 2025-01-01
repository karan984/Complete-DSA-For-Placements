#include<iostream>
using namespace std;
//This code is written by Karan Mashru
int main()
{
    int n, ans=0, i, j;

    cin>>n;

    int a[n];

    //This code is written by Karan Mashru
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    //This code is written by Karan Mashru
    for(i=0; i<n;)
    {
        j=i;
        ans++;

        while(i<n && a[i]==a[j]){
            i++;
        }
    }

    //This code is written by Karan Mashru
    cout<<ans<<"\n";
}