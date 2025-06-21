#include<iostream>
using namespace std;
int main()
{
    int d, i, j, ans=0, s;

    cin>>d>>s;

    if(s>d*9){
        cout<<"-1\n";
        return 0;
    }

    if(s==0 && d>1){
        cout<<"-1\n";
        return 0;
    }

    if(s==0 && d==1){
        cout<<"0\n";
        return 0;
    }

    j=1;

    for(i=0; i<d; i++)
    {
        while((s-j)>(d-i-1)*9){
            j++;
        }

        ans=ans*10+j;
        s=s-j;
    }

    cout<<ans<<"\n";
}