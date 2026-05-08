#include<iostream>
using namespace std;
int main()
{
    int n, m, i, j, k, z=101, e1, e2, f=0;
    cin>>n>>m;

    int a[n], b[m];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<m; i++)
    {
        cin>>b[i];
    }

    i=0;
    j=0;
    k=0;

    while(i<n || j<m){
        if(i<n && j<m){
            e1=(a[i]%z);
            e2=(b[j]%z);
            if(e1<=e2){
                if(f==0){
                    a[k]=a[k]+e1*z;
                    k++;
                    if(k==n){
                        f=1;
                        k=0;
                    }
                }else{
                    b[k]=b[k]+e1*z;
                    k++;
                }
                i++;
            }else{
                if(f==0){
                    a[k]=(a[k]+e2*z);
                    k++;
                    if(k==n){
                        f=1;
                        k=0;
                    }
                }else{
                    b[k]=(b[k]+e2*z);
                    k++;
                }
                j++;
            }
        }else if(i<n){
            e1=(a[i]%z);
            if(f==0){
                a[k]=a[k]+e1*z;
                k++;
                if(k==n){
                    f=1;
                    k=0;
                }
            }else{
                b[k]=b[k]+e1*z;
                k++;
            }
            i++;
        }else{
            e2=(b[j]%z);
            if(f==0){
                a[k]=(a[k]+e2*z);
                k++;
                if(k==n){
                    f=1;
                    k=0;
                }
            }else{
                b[k]=(b[k]+e2*z);
                k++;
            }
            j++;
        }
    }

    for(i=0; i<n; i++)
    {
        a[i]=a[i]/z;
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    for(i=0; i<m; i++)
    {
        b[i]=b[i]/z;
        cout<<b[i]<<" ";
    }
    cout<<"\n";

}