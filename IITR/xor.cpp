#include<iostream>
#include<vector>
using namespace std;
void generate(int n, vector<int>& a){
    while(n>0 && (n%2)==0){
        n=n/2;
    }

    while(n>0){
        a.push_back((n%2));
        n=n/2;
    }
}
bool check(vector<int>& a){
    int n=a.size(), i, j;

    i=0;
    j=n-1;

    while(i<j){
        if(a[i]==a[j]){
            i++;
            j--;
        }else{
            return false;
        }
    }

    if(i==j){
        if(a[i]==1)
            return false;
    }

    return true;
}
int main()
{
    int t, n, i, j;

    cin>>t;

    for(;t--;)
    {
        cin>>n;
        vector<int> a;

        generate(n, a);

        if(check(a))
            cout<<"YES\n";
        else
            cout<<"NO\n";


    }


}