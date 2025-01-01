#include<iostream>
// This code is written by Karan Mashru
using namespace std;
int main()
{
    int r, c, i, j;

    cin>>r>>c;
    // This code is written by Karan Mashru
    int a[r][c];

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cin>>a[i][j];
        }
    }

    // This code is written by Karan Mashru
    cout<<"Row wise traversal\n";

    for(i=0; i<r; i++)
    {
        cout<<"Row "<<i<<": ";
        for(j=0; j<c; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    // This code is written by Karan Mashru
    cout<<"Column wise traversal\n";

    for(j=0; j<c; j++)
    {
        cout<<"Column "<<j<<": ";
        for(i=0; i<r; i++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    // This code is written by Karan Mashru
}