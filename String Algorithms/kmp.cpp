#include<iostream>
using namespace std;
void computeLPSArray(string pat, int m, int lps[]){
    int i, j;
    lps[0]=0;

    j=0;

    for(i=1; i<m;){
        if(pat[i]==pat[j]){
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
    string txt, pat;
    int n, m, i, j, ans=-1;

    cin>>txt;
    cin>>pat;

    n=txt.size();
    m=pat.size();

    int lps[m];

    computeLPSArray(pat, m, lps);

    j=0;
    
    for(i=0; i<n;){
        if(txt[i]==pat[j]){
            i++;
            j++;
        }else{
            if(j==0){
                i++;
            }else{
                j=lps[j-1];
            }
        }

        if(j==m){
            ans=i-1;
            break;
        }
    }

    cout<<ans<<"\n";
}