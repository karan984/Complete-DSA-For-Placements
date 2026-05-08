#include<iostream>
using namespace std;
void fun(int* b){

    (*b)++;
    cout<<(*b)<<"\n";
    b++;
}
void fun(int& b){
    
    b++;
    cout<<b<<"\n";
}
int main()
{
    int a = 5;
    fun(&a);

    cout<<a<<"\n";
}