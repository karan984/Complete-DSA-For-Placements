#include<iostream>
using namespace std;
//This code is written by Karan Mashru
int main()
{
    int n, m, i, j, sum=0, c, sr, sc, er, ec;

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
    sr=0;er=n-1;sc=0;ec=m-1;

    //This code is written by Karan Mashru

    while(sr<=er && sc<=ec){

    for(j=sc; j<=ec; j++)
    {
        sum=sum+a[sr][j]*c;
        c++;
    }

    for(i=sr+1; i<=er; i++)
    {
        sum=sum+a[i][ec]*c;
        c++;
    }

    //This code is written by Karan Mashru
    if(sr<er){
    for(j=ec-1; j>=sc; j--)
    {
        sum=sum+a[er][j]*c;
        c++;
    }
    }
    
    //This code is written by Karan Mashru
    if(sc<ec){
    for(i=er-1; i>=sr+1; i--)
    {
        sum=sum+a[i][sc]*c;
        c++;
    }
    }

    sr++;
    er--;
    sc++;
    ec--;

    }
    cout<<sum<<"\n";
}
//This code is written by Karan Mashru