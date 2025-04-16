#include<iostream>
using namespace std;
int binarySearch(int l, int h, int a[], int x)
{
    if(l<=h){
        int m=(l+h)/2;

        if(a[m]==x){
            return m;
        }

        if(a[m]<x){
            return binarySearch(m+1, h, a, x);
        }else{
            return binarySearch(l, m-1, a, x);
        }

    }else{
        return -1;
    }
}
int main()
{
    int n, i, l, r, x, ans=-1;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cin>>x;

    ans=binarySearch(0, n-1, a, x);

    cout<<ans;
    

}