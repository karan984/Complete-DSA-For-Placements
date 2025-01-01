#include<iostream>
//This code is written by Karan Mashru
using namespace std;
int main()
{
    int w, i, j;
    cin>>w;

    //This code is written by Karan Mashru
    int h[w];
    long pre_max[w], suf_max[w], ans=0;

    for(i=0; i<w; i++)
    {
        cin>>h[i];
    }
    //This code is written by Karan Mashru

    pre_max[0]=h[0];
    for(i=1; i<w; i++)
    {
        pre_max[i]=max(pre_max[i-1], long(h[i]));
    }

    suf_max[w-1]=h[w-1];
    for(i=w-2; i>=0; i--){
        suf_max[i]=max(suf_max[i+1], long(h[i]));
    }

    //This code is written by Karan Mashru
    for(i=0; i<w; i++)
    {
        ans=ans+min(pre_max[i], suf_max[i])-h[i];
    }

    cout<<ans<<"\n";

    //This code is written by Karan Mashru

}