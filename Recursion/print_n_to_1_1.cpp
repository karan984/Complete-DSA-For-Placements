#include<iostream>
using namespace std;
void A(int n)
{
    if(n==0){
        return;
    }

    cout<<n<<" ";
    A(n-1);
}
int main()
{
    int n;
    cin>>n;

    A(n);
}