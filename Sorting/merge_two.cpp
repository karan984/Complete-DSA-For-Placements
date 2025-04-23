#include<iostream>
using namespace std;
void merge(int a[], int b[], int c[], int n, int m)
{
    int i, j, k;
    i=0;
    j=0;k=0;

    while(k<n+m){
        if(i<n && j<m){
            if(a[i]<=b[j]){
                c[k]=a[i];
                i++;
                k++;
            }else{
                c[k]=b[j];
                j++;
                k++;
            }
        }else if(i<n){
            c[k]=a[i];
            i++;
            k++;
        }else{
            c[k]=b[j];
            j++;
            k++;
        }
    }
}
int main()
{
    int n, m, i;

    cin>>n;
    cin>>m;

    int a[n];
    int b[m], c[n+m];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<m; i++){
        cin>>b[i];
    }

    merge(a, b, c, n, m);

    for(i=0; i<n+m; i++){
        cout<<c[i]<<" ";
    }
}