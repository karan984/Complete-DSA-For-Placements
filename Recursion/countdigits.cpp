#include<iostream>
using namespace std;
int countD(int n)
{
    if(n==0){
        return 0;
    }

    return 1+countD(n/10);
}
int main()
{
    int n;
    cin>>n;

    int ans = countD(n);

    cout<<ans;
}