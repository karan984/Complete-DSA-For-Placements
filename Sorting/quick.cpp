#include<iostream>
using namespace std;
int find_partition(int l, int h, int a[])
{
    int i=l+1, j=h;

    while(i<=j){
        while(i<=h && a[i]<=a[l]){
            i++;
        }

        while(j>l && a[j]>a[l]){
            j--;
        }

        if(i<j){
            swap(a[i], a[j]);
        }
    }
    swap(a[j], a[l]);

    return j;
}
void quick_sort(int l, int h, int a[])
{
    if(l<h){
        int p = find_partition(l, h, a);
        quick_sort(l, p-1, a);
        quick_sort(p+1, h, a);
    }
}
int main()
{
    int n, i;

    cin>>n;

    int a[n];

    for(i=0; i<n; i++){
        cin>>a[i];
    }

    quick_sort(0, n-1, a);

    for(i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}