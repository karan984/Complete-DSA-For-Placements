#include<iostream>
#include<vector>
using namespace std;
void power_set(int i, int n, string s, string gen, vector<string>& ans){
    if(i==n){
        ans.push_back(gen);
        return;
    }

    //gen=abd
    //s[i]=e
    //gen1 = abde
    power_set(i+1, n, s, gen+s[i], ans);
    //gen=abd
    power_set(i+1, n, s, gen, ans);
}
int main()
{
    string s;
    cin>>s;

    int n=s.size(), i, j, m;

    vector<string> ans;

    power_set(0, n, s, "", ans);

    m=ans.size();

    cout<<"Power set is\n";
    for(i=0; i<m; i++)
    {
        cout<<ans[i]<<" ";
    }

}