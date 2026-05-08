#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void fun(int i, int n, vector<int>& comb, vector<vector<int>>& ans, unordered_map<int, bool> col, 
    unordered_map<int, bool> dia1, unordered_map<int, bool> dia2){

        if(i==(n+1)){
            //cout<<"p\n";
            ans.push_back(comb);
            return;
        }

        int j;

        for(j=1; j<=n; j++)
        {
            if(col[j]==false && dia1[i+j]==false && dia2[i-j]==false){
                comb.push_back(j);
                col[j]=true;
                dia1[i+j]=true;
                dia2[i-j]=true;

                fun(i+1, n, comb, ans, col, dia1, dia2);

                comb.pop_back();
                col[j]=false;
                dia1[i+j]=false;
                dia2[i-j]=false;
            }
        }
}
int main()
{
    int n, i, j;
    cin>>n;

    vector<vector<int>> ans;
    vector<int> comb;
    unordered_map<int, bool> col;
    unordered_map<int, bool> dia1;
    unordered_map<int, bool> dia2;

    fun(1, n, comb, ans, col, dia1, dia2);

    for(vector<int> x : ans){
        for(int j : x){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

}