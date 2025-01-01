#include<iostream>
//This code is written by Karan Mashru
using namespace std;
int main()
{
    int n, s, i, j, f=0;

    //This code is written by Karan Mashru
    cin>>n;

    int a[n];

    //This code is written by Karan Mashru
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cin>>s;

    /*for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]+a[j]==s){
                f=1;
                break;
            }
        }
        if(f==1){
            break;
        }
    }*/

   //This code is written by Karan Mashru
   i=0;j=n-1;
   
   while(i<j)
   {
    if(a[i]+a[j]==s){
        f=1;
        break;
    }else if(a[i]+a[j]>s){
        j--;
    }else{
        i++;
    }
   }

   //This code is written by Karan Mashru
    if(f==0){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    }
}
//This code is written by Karan Mashru