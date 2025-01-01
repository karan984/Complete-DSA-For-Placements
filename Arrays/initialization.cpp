#include<iostream>
using namespace std;

int main()
{
    int ans_min, ans_max, i, n;

    cin>>n;

    int a[n];



    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    ans_max=a[0];
    ans_min=a[0];

    for(i=1; i<n; i++)
    {
        ans_max=max(ans_max, a[i]);
        ans_min=min(ans_min, a[i]);
    }

    cout<<"Maximum and minimum elements are "<<ans_max<<" and "<<ans_min;
}