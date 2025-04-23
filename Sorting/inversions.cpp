#include<iostream>
using namespace std;
void merge(int l, int m, int h, int a[], int b[], int &ans)
{
    int i, j, k;
    i=l;
    j=m+1;
    k=l;

    while(k<=h)
    {
        if(i<=m && j<=h){
            if(a[i]<=a[j]){
                b[k]=a[i];
                i++;
                k++;
            }else{
                ans=ans+m-i+1;
                b[k]=a[j];
                k++;
                j++;
            }
        }else if(i<=m){
            b[k]=a[i];
            k++;
            i++;
        }else{
            b[k]=a[j];
            k++;
            j++;
        }
    }

    for(i=l; i<=h; i++)
    {
        a[i]=b[i];
    }
}
void merge_sort(int l, int h, int a[], int b[], int&ans)
{
    if(l<h){
        int m=(l+h)/2;
        merge_sort(l, m, a, b, ans);
        merge_sort(m+1, h, a, b, ans);
        merge(l, m, h, a, b, ans);
    }
}
int main()
{
    int n, i;

    cin>>n;
    int ans = 0;

    int a[n], b[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    merge_sort(0, n-1, a, b, ans);

    cout<<ans<<"\n";

    
}