#include<iostream>
#include<vector>
using namespace std;
void fun(int a1)
{
    a1++;
    cout<<a1<<"\n";
}
void fun1(vector<int> &b){
    b[99]++;
    cout<<b[99]<<"\n";
}
void fun2(int * p1){
    (*p1)++;
    cout<<*p1<<"\n";
}
void fun4(int c1[]){
    c1[1]=20;
    cout<<c1[1]<<"\n";
}
int main()
{
    int a = 5;
    vector<int> b(100, 0);
    //fun(a);
    //cout<<a<<"\n";
    /*cout<<b[99]<<"\n";
    fun1(b);

    cout<<b[99]<<"\n";
    */

   /*fun2(&a);

   cout<<a<<"\n";*/

   int c[5]={1, 2, 3, 4, 5};
   fun4(c);
   cout<<c[1]<<"\n";
}