#include<iostream>
using namespace std;
void A(int n){
    if(n==0){
        return;
    }
    cout<<"Karan\n";
    A(n-1);
}
int main()
{
    A(8);
}