#include<iostream>
using namespace std;
void count_sort(int a[], int n)
{
    int i, max_e=a[0], j, c;

    for(i=1; i<n; i++){
        max_e=max(max_e, a[i]);
    }

    int count[max_e+1];

    for(i=0; i<=max_e; i++){
        count[i]=0;
    }

    for(i=0; i<n; i++){
        count[a[i]]++;
    }

    j=0;
    for(i=0; i<=max_e; i++){
        c=count[i];

        while(c>0){
            a[j]=i;
            j++;
            c--;
        }
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

    count_sort(a, n);

    for(i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}