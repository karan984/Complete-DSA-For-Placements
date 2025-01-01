#include<iostream>
using namespace std;
int main()
{
    int b = 5, c=20;
    /*int a[2]={100, 200};
    int * p1 = NULL;
    p1=&b;

    cout<<&b<<"\n";
    cout<<p1<<"\n";

    cout<<&p1<<"\n";

    cout<<*p1<<"\n";

    *p1=10;

    cout<<b<<"\n";

    p1=&c;

    cout<<*p1<<"\n";
    *p1=50;
    cout<<c<<"\n";

    p1=&a[0];
    cout<<*p1<<"\n";
    p1++;
    cout<<*p1<<"\n";
    */

   int &ref = b;
   
   //b=c;
   ref = c;
   cout<<ref<<"\n";

   ref++;
   b++;

   cout<<ref<<"\n"<<b<<"\n"<<c<<"\n";

   cout<<&b<<"\n";
   cout<<&ref<<"\n";
   cout<<&c<<"\n";
   /*ref++;

   cout<<&b<<"\n";
   cout<<&ref<<"\n";
   cout<<ref<<"\n";
   ref=10;
   cout<<b<<"\n";*/
}