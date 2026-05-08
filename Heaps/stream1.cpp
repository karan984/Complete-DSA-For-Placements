#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
        cin>>a[i];

    for(i=0; i<n; i++)
    {
        j=i-1;
        int temp = a[i];

        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;

        if((i%2)==1){
            cout<<((a[i/2]+a[i/2+1])/2.0)<<" ";
        }else{
            cout<<a[i/2]<<" ";
        }


    }
}