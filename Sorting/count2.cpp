#include<iostream>
using namespace std;
void count_sort(int a[], int n)
{
    int i, j, max_e=a[0];
    int output[n];

    for(i=1; i<n; i++){
        max_e=max(max_e, a[i]);
    }//O(n)

    int count[max_e+1];
    for(i=0; i<=max_e; i++){
        count[i]=0;
    }

    for(i=0;i<n;i++){
        count[a[i]]++;
    }//O(n)

    for(i=1; i<=max_e; i++){
        count[i]=count[i]+count[i-1];
    }//O(max_e)

    for(i=n-1; i>=0; i--){
        output[count[a[i]]-1]=a[i];
        count[a[i]]--;
    }//O(n)

    for(i=0; i<n; i++){
        a[i]=output[i];
    }

}
int main()
{
    int n, i, j;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++){
        cin>>a[i];
    }

    count_sort(a, n);

    for(i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}