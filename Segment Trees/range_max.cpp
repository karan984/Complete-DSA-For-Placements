#include<iostream>
using namespace std;
void build(int node, int l, int h, int a[], int seg[]){
    if(l<h){
        int m=(l+h)/2;

        build(2*node+1, l, m, a, seg);
        build(2*node+2, m+1, h, a, seg);

        seg[node]=max(seg[2*node+1],seg[2*node+2]);
    }else{
        seg[node]=a[l];
    }
}
void update(int node, int l, int h, int i, int x, int seg[]){
    if(l<h){
        int m=(l+h)/2;

        if(i<=m)
            update(2*node+1, l, m, i, x, seg);
        else
            update(2*node+2, m+1, h, i, x, seg);

        seg[node]=max(seg[2*node+1],seg[2*node+2]);
    }else{
        //l=h=i
        seg[node]=x;
    }
}
int query(int node, int l, int h, int l1, int h1, int seg[]){
    if(l>=l1 && h<=h1)
        return seg[node];

    if(l>h1 || l1>h)
        return INT_MIN;

    int m=(l+h)/2;
    int p1 = query(2*node+1, l, m, l1, h1, seg);
    int p2 = query(2*node+2, m+1, h, l1, h1, seg);

    return max(p1,p2);
}
int main()
{
    int n, q, i, j, l1, h1, x, ans, type;

    cin>>n>>q;

    int a[n], seg[4*n];

    for(i=0; i<n; i++)
        cin>>a[i];

    build(0, 0, n-1, a, seg);


    for(j=0; j<q; j++)
    {
        cin>>type;

        if(type==1){
            cin>>i>>x;

            a[i]=x;
            update(0, 0, n-1, i, x, seg);


        }else{
            cin>>l1>>h1;
            ans=query(0, 0, n-1, l1, h1, seg);

            cout<<ans<<"\n";
        }
    }



}