#include<iostream>
using namespace std;
int main()
{
    int n, i, x, s1, s2, sm;

    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
        cin>>a[i];

    x=0;

    for(i=0; i<n; i++){
        x=x^a[i];
    }

    sm = (x&(-x));

    s1=s2=0;

    for(i=0; i<n; i++)
    {
        if((a[i]&sm)==sm)
            s1=s1^a[i];
        else
            s2=s2^a[i];
    }

    cout<<s1<<" "<<s2<<"\n";

}