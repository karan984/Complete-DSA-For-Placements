#include<iostream>
using namespace std;
int main()
{
    int n, i, s1, s2, x, y;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
        cin>>a[i];

    x=0;

    for(i=0; i<n; i++){
        x=x^a[i];
    }
    for(i=1; i<=n; i++)
    {
        x=x^i;
    }

    y=x&(-x);

    s1=s2=0;

    for(i=0; i<n; i++)
    {
        if((a[i]&y)==y)
            s1=s1^a[i];
        else
            s2=s2^a[i];
    }

    for(i=1; i<=n; i++){
        if((i^y)==y)
            s1=s1^i;
        else
            s2=s2^i;
    }

    for(i=0; i<n; i++)
    {
        if(a[i]==s1){
            cout<<"Repeating element is "<<s1<<" and missing element is "<<s2<<"\n";
            break;
        }
        if(a[i]==s2){
            cout<<"Repeating element is "<<s2<<" and missing element is "<<s1<<"\n";
            break;

        }
    }
}