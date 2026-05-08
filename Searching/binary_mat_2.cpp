#include<iostream>
using namespace std;
void binarySearch(int n, int m, int a[][100], int x){
    int l=0, h=n*m-1;
    int mid;

    int row, col;

    while(l<=h){
        mid = (l+h)/2;

        row = (mid)/m;
        col = (mid)%m;

        if(a[row][col]==x){
            cout<<x<<" is present at row "<<row<<" and col "<<col<<"\n";
            return;
        }else if(a[row][col]>x){
            h=mid-1;
        }else{
            l=mid+1;
        }
    }

    cout<<x<<" is not present\n";
}
int main()
{
    int n, m, i, j, x, row, col;
    cin>>n>>m;

    int a[n][100];

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }

    cin>>x;

    binarySearch(n, m, a, x);
}