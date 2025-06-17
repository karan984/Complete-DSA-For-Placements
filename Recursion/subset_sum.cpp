#include<iostream>
using namespace std;
bool subsetSum(int m, int rem, int a[]){
    if(rem<0){
        return false;
    }

    if(rem==0){
        return true;
    }

    //rem>0
    if(m==0){
        return false;
    }

    //m>0, rem>0

    return subsetSum(m-1, rem, a)|subsetSum(m-1, rem-a[m-1], a);
}
int main()
{
    int n, i;
    int s;

    cin>>n>>s;

    int a[n];

    for(i=0; i<n; i++){
        cin>>a[i];
    }

    bool ans = subsetSum(n, s, a);

    if(ans==true){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
}