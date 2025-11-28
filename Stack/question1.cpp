#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n, i, j, k, f=0;
    cin>>n;

    int a[n];
    int pmin[n];
    int pg[n];
    stack<int> s;

    for(i=0; i<n; i++)
        cin>>a[i];

    pmin[0]=a[0];

    for(i=1; i<n; i++)
        pmin[i]=min(pmin[i-1], a[i]);

    for(i=0; i<n; i++)
    {
        pg[i]=-1;

        while(s.empty()==false){
            if(a[s.top()]<=a[i]){
                s.pop();
            }else{
                pg[i]=s.top();
                break;
            }
        }

        s.push(i);
    }

    for(k=2; k<n; k++)
    {
        j=pg[k];

        if(j==-1)
            continue;

        if(j==0)
            continue;

        if(pmin[j-1]<a[k]){
            f=1;
            cout<<pmin[i-1]<<" "<<a[j]<<" "<<a[k];
            break;
        }
    }

    if(f==0)
        cout<<"Doesn't exists";
    
}