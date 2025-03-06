#include<iostream>
#include<vector>
using namespace std;
void power_set_unique(int i, int n, string gen, string s, vector<string>& ans, bool taken[])
{
    if(i==n){
        ans.push_back(gen);
        return;
    }

    power_set_unique(i+1, n, gen, s, ans, taken);

    if(i>0 && s[i]==s[i-1] && taken[i-1]==false)
        return;
    
    taken[i]=true;
    power_set_unique(i+1, n, gen+s[i], s, ans, taken);
    taken[i]=false;
    
}
int main()
{
    string s;
    int i, n, m;
    cin>>s;

    n=s.size();
    bool taken[n];

    for(i=0; i<n; i++){
        taken[i]=false;
    }

    vector<string> ans;

    sort(s.begin(), s.end());

    power_set_unique(0, n, "", s, ans, taken);

    m=ans.size();

    for(i=0; i<m; i++)
    {
        cout<<ans[i]<<" ";
    }
}