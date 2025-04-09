#include<iostream>
using namespace std;
int main()
{
    int n, i, x;
    bool found = false;

    cin>>n;

    int a[n];

    for(i=0; i<n; i++){
        cin>>a[i];
    }

    cin>>x;

    for(i=0; i<n; i++)
    {
        if(a[i]==x){
            found=true;
            break;
        }
    }

    if(found==true)
        cout<<"Element Found\n";
    else
        cout<<"Element Not Found\n";
}