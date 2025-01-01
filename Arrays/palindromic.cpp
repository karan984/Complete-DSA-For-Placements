#include<iostream>
using namespace std;
// This code is written by Karan Mashru
int main()
{
    int n, i, j, f=0;

    cin>>n;

    int a[n];

    // This code is written by Karan Mashru
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        //rev[i]=a[i];
    }

    // This code is written by Karan Mashru
    //reverse(rev, rev+n);
    //reverse(rev.begin(), rev.end());

    /*for(i=0; i<n; i++)
    {
        if(a[i]!=rev[i]){
            f=1;
            break;
        }
    }*/

   // This code is written by Karan Mashru
   i=0;j=n-1;

   /*while(i<j){
    if(a[i]!=a[j]){
        f=1;
        break;
    }
    i++;
    j--;
   }*/

  // This code is written by Karan Mashru
   for(i=0; i<n/2; i++)
   {
    if(a[i]!=a[n-i-1]){
        f=1;
        break;
    }
   }

    if(f==0){
        cout<<"Palindromic\n";
    }else{
        cout<<"Not Palindromic\n";
    }

// This code is written by Karan Mashru
}