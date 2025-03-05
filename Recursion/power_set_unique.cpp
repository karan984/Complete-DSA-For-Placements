#include<iostream>
#include<set>
using namespace std;
void fun(int i, int n, string gen, string s, set<string>& ans)
{
    if(i==n){
        ans.insert(gen);
        return;
    }

    fun(i+1, n, gen+s[i], s, ans);
    fun(i+1, n, gen, s, ans);
}
int main()
{
    string s;
    cin>>s;

    int n=s.size(), i, j;

    set<string> ans;

    fun(0, n, "", s, ans);

    set<string>::iterator itr;

    for(itr=ans.begin(); itr!=ans.end(); itr++)
    {
        cout<<*itr<<" ";
    }
}