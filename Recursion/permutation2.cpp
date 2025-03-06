#include<iostream>
#include<vector>
using namespace std;
void permutation(int i, int n, string s, vector<string>& ans)
{
    if(i==n){
        ans.push_back(s);
        return;
    }

    for(int j=i; j<n; j++)
    {
        swap(s[i], s[j]);
        permutation(i+1, n, s, ans);
        swap(s[i], s[j]);
    }
}
int main()
{
    int n, m, i, j;
    string s;
    cin>>s;

    n=s.size();

    vector<string> ans;

    permutation(0, n, s, ans);

    m=ans.size();

    for(i=0; i<m; i++)
    {
        cout<<ans[i]<<" ";
    }
}