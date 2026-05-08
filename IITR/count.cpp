#include<iostream>
using namespace std;
int main()
{
    int a = 22;

   int c=0;

   /*while(a>0)
   {
    if((a%2)==1)
        c++;

    a=a>>1;
   }*/

   while(a>0)
   {
    a=(a&(a-1));
    c++;
   }

   cout<<c<<"\n";
   
}