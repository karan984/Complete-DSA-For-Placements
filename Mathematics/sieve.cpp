#include<iostream>
//This code is written by Karan Mashru
using namespace std;
int main()
{
    int n, i, j;

    cin>>n;

    int prime[n+1];

    //This code is written by Karan Mashru
    for(i=0; i<=n; i++)
    {
        prime[i]=1;
    }
    prime[0]=prime[1]=0;

    //This code is written by Karan Mashru
    for(i=2; i*i<=n; i++)
    {
        if(prime[i]==1){
            for(j=i*i; j<=n; j+=i){
                prime[j]=0;
            }
        }
    }

    cout<<"Prime numbers between 1 and "<<n<<" are : ";
    //This code is written by Karan Mashru
    for(i=2; i<=n; i++)
    {
        if(prime[i]==1){
            cout<<i<<" ";
        }
    }
}
//This code is written by Karan Mashru