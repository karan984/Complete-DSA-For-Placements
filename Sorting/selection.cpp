#include<iostream>
using namespace std;
void selection_sort(int a[], int n){
    int i, j, min_idx;

    for(i=0; i<n-1; i++)
    {
        min_idx=i;

        for(j=i+1; j<n; j++){
            if(a[j]<a[min_idx]){
                min_idx=j;
            }
        }

        swap(a[min_idx], a[i]);
    }
}
int main()
{
    int n, i;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    selection_sort(a, n);

    for(i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}