#include<iostream>
using namespace std;
void A(int n)
{
    if(n==0){
        return;
    }

    A(n-1);
    cout<<n<<" ";
    
}
int main()
{
    int n;
    cin>>n;

    A(n);
}