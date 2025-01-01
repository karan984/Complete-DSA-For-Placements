#include<iostream>
using namespace std;

int main()
{
    int n, i, j, k, sum;
    cin>>n;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    /*for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            //[i, j]
            sum=0;
            for(k=i; k<=j; k++){
                sum=sum+a[k];
            }

            cout<<"Subarray sum for subarray from "<<i<<" to "<<j<<" is "<<sum<<"\n";
        }
    }*/

   for(i=0; i<n; i++)
   {
    sum=0;
    for(j=i; j<n; j++)
    {
        sum=sum+a[j];
        cout<<"Subarray sum for subarray from "<<i<<" to "<<j<<" is "<<sum<<"\n";
    }
   }
}