#include<iostream>
using namespace std;
void insertion_sort(int a[], int n)
{
    int i, j, key;

    for(i=1; i<n; i++)
    {
        j=i-1;
        key=a[i];

        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=key;
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

    insertion_sort(a, n);

    for(i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}