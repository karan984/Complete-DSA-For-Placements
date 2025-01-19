#include<iostream>
using namespace std;
void A(int i, int n)
{
    if(i>n){
        return;
    }

    cout<<i<<" ";
    A(i+1, n);
}
int main()
{
    int n;

    cin>>n;

    A(1, n);
}