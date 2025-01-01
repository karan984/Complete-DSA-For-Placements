#include<iostream>
//This code is written by Karan Mashru
using namespace std;
int main()
{
    int p[1000001], i, j, q, x, f=0, next[1000001];
    //This code is written by Karan Mashru
    for(i=0; i<=1000000; i++)
    {
        p[i]=1;
    }

    p[0]=p[1]=0;
    //This code is written by Karan Mashru
    for(i=2; i*i<=1000000; i++)
    {
        if(p[i]==1){
        for(j=i*i; j<=1000000; j+=i){
            p[j]=0;
        }
        }
    }

    next[1000000]=-1;

    //This code is written by Karan Mashru
    for(i=1000000-1; i>=1; i--)
    {
        if(p[i]==1){
            next[i]=i;
        }else{
            next[i]=next[i+1];
        }
    }

    cin>>q;

    for(;q--;)
    {
        cin>>x;
        f=0;

        /*for(i=x; i<=1000000; i++)
        {
            if(p[i]==1){
                f=1;
                cout<<"Next nearest prime number of "<<x<<" is "<<i<<"\n";
                break;
            }
        }

        if(f==0){
            cout<<"No next nearest prime number within 1000000\n";
        }*/

       cout<<"Next nearest prime number of "<<x<<" is "<<next[x]<<"\n";
       //This code is written by Karan Mashru
    }

//This code is written by Karan Mashru
}