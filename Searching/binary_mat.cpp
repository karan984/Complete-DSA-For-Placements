#include<iostream>
using namespace std;
int binarySearchRow(int l, int h, int a[][100], int x, int m){
    if(l>h)
        return -1;

    int mid=(l+h)/2;

    if(a[mid][0]>x){
        return binarySearchRow(l, mid-1, a, x, m);
    }else{
        if(a[mid][m-1]>=x){
            return mid;
        }else{
            return binarySearchRow(mid+1, h, a, x, m);
        }
    }
}
int binarySearchCol(int l, int h, int a[], int x){
    if(l>h)
        return -1;

    int mid = (l+h)/2;

    if(a[mid]==x)
        return mid;
    if(a[mid]>x)
        return binarySearchCol(l, mid-1, a, x);
    else
        return binarySearchCol(mid+1, h, a, x);
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

    //low, high
    row = binarySearchRow(0, n-1, a, x, m);

    if(row==-1){
        cout<<x<<" is not present in this matrix\n";
        return 0;
    }

    col = binarySearchCol(0, m-1, a[row], x);

    if(col==-1){
        cout<<x<<" is not present in this matrix\n";
        return 0;
    }

    cout<<"Value "<<x<<" is present at "<<row<<" row and "<<col<<" column\n";
}