#include<iostream>
using namespace std;
int main()
{
    int n, ans=1, i, j;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n;)
    {
        if(a[i]<1 || a[i]>n)
        {
            i++;
            continue;
        }

        if(a[i]!=i+1){
            if(a[a[i]-1]!=a[i])
                swap(a[i], a[a[i]-1]);
            else{
                i++;
            }
        }else{
            i++;
        }
    }

    for(i=0; i<n; i++)
    {
        if(a[i]!=i+1){
            ans=i+1;
            break;
        }
    }

    cout<<ans<<"\n";
}