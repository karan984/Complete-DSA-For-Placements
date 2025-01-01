#include<iostream>
using namespace std;

int main()
{
    int n, i, j;

    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    i=0;j=n-1;

    while(i<j)
    {
        swap(a[i], a[j]);
        i++;
        j--;
        
    }
    
    cout<<"Array a after reversing is :\n";

    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}