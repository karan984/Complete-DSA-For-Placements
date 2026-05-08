#include<iostream>
using namespace std;
int main()
{
    string txt, pat;
    int n, m, i, j, f, starti=-1;

    cin>>txt>>pat;

    n=txt.size();
    m=pat.size();

    for(i=0; i+m-1<n; i++)
    {
        f=0;

        for(j=0; j<m; j++){
            if(pat[j]!=txt[i+j]){
                f=1;
                break;
            }
        }

        if(f==0){
            starti=i;
            break;
        }
    }

    if(starti==-1)
        cout<<"No\n";
    else
        cout<<"Substring starting from index "<<starti<<" matches with pattern\n";



}