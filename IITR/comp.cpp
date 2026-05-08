#include<iostream>
#include<vector>
using namespace std;
bool comp(int a, int b){
    if(a>b)
        return true;

    return false;
}
int main()
{
    int t, n, i, j;

    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
        cin>>a[i];

    sort(a, a+n, comp);

    for(i=0; i<n; i++)
        cout<<a[i]<<" ";



}