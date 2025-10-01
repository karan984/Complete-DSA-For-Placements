#include<iostream>
using namespace std;
int fib(int n, int memo[])
{
    if(memo[n]!=-1){
        return memo[n];
    }

    if(n==0 || n==1)
        memo[n]=n;
    else
        memo[n]=fib(n-1, memo)+fib(n-2, memo);

    return memo[n];
}
int main()
{
    int n, i;
    cin>>n;

    int memo[n+1];

    for(i=0; i<=n; i++){
        memo[i]=-1;
    }

    memo[n]=fib(n, memo);

    cout<<n<<" fibonacci number is "<<memo[n]<<"\n";
}