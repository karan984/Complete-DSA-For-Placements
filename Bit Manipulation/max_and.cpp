#include<iostream>
using namespace std;
int main()
{
    int n, i, j, k, c;
    int ans =0;
    int poss_ans = 0;

    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
        cin>>a[i];

    for(i=30; i>=0; i--)
    {
        j=(1<<i);
        poss_ans = ans|j;

        c=0;

        for(k=0; k<n; k++)
        {
            if((a[k]&poss_ans)==poss_ans){
                c++;
            }
        }

        if(c>=2){
            ans=poss_ans;
        }
    }

    cout<<ans<<"\n";
}