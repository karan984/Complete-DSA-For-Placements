#include<iostream>
using namespace std;

int main()
{
    int n, i, j;

    cin>>n;

    cout<<"Pattern 1\n\n";
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++){
            cout<<"*";
        }

        cout<<"\n";
    }
    cout<<"\n";

    cout<<"Pattern 2\n\n";

    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            cout<<j+1<<" ";
        }

        cout<<"\n";
    }
    cout<<"\n";

    cout<<"Pattern 3\n\n";

    for(i=0; i<2*n-1; i++)
    {
        for(j=0; j<2*n-1; j++)
        {
            cout<<max(abs(i-(n-1)), abs(j-(n-1)))+1<<" ";
        }
        cout<<"\n";
    }

    

}