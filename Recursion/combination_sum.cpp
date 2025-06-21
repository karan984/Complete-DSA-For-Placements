#include<iostream>
using namespace std;
bool combination_sum(int m, int rem, int a[]){
    if(rem<0){
        return false;
    }

    if(rem==0){
        return true;
    }

    if(m==0){
        return false;
    }

    return combination_sum(m-1, rem, a)|combination_sum(m, rem-a[m-1], a);

}
int main(){
    int n, s, i;
    cin>>n>>s;

    int a[n];

    for(i=0; i<n; i++){
        cin>>a[i];
    }

    bool ans = combination_sum(n, s, a);

    if(ans==true){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }

}