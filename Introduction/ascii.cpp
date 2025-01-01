#include<iostream>
using namespace std;

int main()
{
    cout<<int('a')<<"\n";

    cout<<char(97+5)<<"\n";

    cout<<'a'+5<<"\n";

    cout<<char('a'+5)<<"\n";

    int n, i, j;

    cin>>n;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            cout<<char(65+j)<<" ";
        }

        cout<<"\n";
    }
}