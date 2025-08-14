#include<iostream>
#include<unordered_map>
using namespace std; 
int main()
{
    int n, m, i, j, f=1;
    unordered_map<int, int> mp;
    

    cin>>n>>m;
    int a[n], b[m];

    for(i=0; i<n; i++){
        cin>>a[i];
    }

    for(i=0; i<m; i++){
        cin>>b[i];
    }

    if(n!=m){
        cout<<"Array a and b are not equal\n";
        return 0;
    }

    for(i=0; i<n; i++)
    {
        if(mp.find(a[i])==mp.end()){
            mp[a[i]]=1;
        }else{
            mp[a[i]]++;
        }
    }

    for(i=0; i<m; i++){
        if(mp.find(b[i])==mp.end()){
            f=0;
            break;
        }
        mp[b[i]]--;
        if(mp[b[i]]==0){
            mp.erase(b[i]);
        }
    }

    if(f==0)
        cout<<"Array a and b are not equal\n";
    else
        cout<<"Array a and b are equal\n";

}