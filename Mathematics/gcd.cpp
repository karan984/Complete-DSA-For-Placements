#include<iostream>
//This code is written by Karan Mashru
using namespace std;
int main()
{
    int i, g, a, b, m;

    cin>>a>>b;
    m=min(a, b);

    //This code is written by Karan Mashru
    /*for(i=min(a, b); i>=1; i--)
    {
        if((a%i)==0 && (b%i)==0){
            g=i;
            break;
        }
    }*/

    for(i=1; i<=m; i++)
    {
        if((a%i)==0 && (b%i)==0){
            g=i;
        }
    }

    cout<<g<<"\n";
}
//This code is written by Karan Mashru