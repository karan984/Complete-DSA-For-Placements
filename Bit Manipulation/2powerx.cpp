#include<iostream>
using namespace std;
int main()
{
    int n;

    cin>>n;

    if((n&(n-1))==0 && n>0){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
}