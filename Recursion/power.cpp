#include<iostream>
using namespace std;
int power(int a, int p)
{
    if(p==0){
        return 1;
    }

    return a*power(a, p-1);
}
int main()
{
    int a, p, ans = 1;

    cin>>a;
    cin>>p;

    ans = power(a, p);

    cout<<ans<<"\n";
}