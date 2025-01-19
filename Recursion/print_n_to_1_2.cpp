#include<iostream>
using namespace std;
void A(int i, int n)
{
    if(i>n){
        return;
    }
    
    A(i+1, n);
    cout<<i<<" ";
}
int main()
{
    int n;

    cin>>n;

    A(1, n);
}