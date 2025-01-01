#include<iostream>
using namespace std;
//This code is written by Karan Mashru
int main()
{
    int n, m, i, j, sum=0, c;

    cin>>n>>m;

    //This code is written by Karan Mashru
    int a[n][m];

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }

    c=1;

    //This code is written by Karan Mashru
    for(j=0; j<=m-1; j++)
    {
        sum=sum+a[0][j]*c;
        c++;
    }

    for(i=1; i<=n-1; i++)
    {
        sum=sum+a[i][m-1]*c;
        c++;
    }

    //This code is written by Karan Mashru
    if(n>1){
    for(j=m-2; j>=0; j--)
    {
        sum=sum+a[n-1][j]*c;
        c++;
    }
    }
    
    //This code is written by Karan Mashru
    if(m>1){
    for(i=n-2; i>=1; i--)
    {
        sum=sum+a[i][0]*c;
        c++;
    }
    }

    cout<<sum<<"\n";
}
//This code is written by Karan Mashru