#include<iostream>
using namespace std;
void computeLPSArray(string s, int n1, int lps[]){
    int i, j;
    lps[0]=0;
    j=0;

    for(i=1; i<n1;)
    {
        if(s[i]==s[j]){
            lps[i]=j+1;
            i++;
            j++;
        }else{
            if(j==0){
                lps[i]=0;
                i++;
            }else{
                j=lps[j-1];
            }
        }
    }
}
int main()
{
    int n, m, i, j, ans=0;
    string txt, pat;

    cin>>txt;
    cin>>pat;

    n=txt.size();
    m=pat.size();

    string s = pat+'#'+txt;
    cout<<s<<"\n";
    int lps[n+m+1];

    computeLPSArray(s, n+m+1, lps);

    for(i=0; i<n+m+1; i++)
    {
        cout<<lps[i]<<" ";
        if(lps[i]==m){
            ans++;
        }
    }

    cout<<"\n"<<ans<<"\n";
}