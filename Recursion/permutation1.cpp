#include<iostream>
using namespace std;
void permutation(int i, int n, int a[], int per[], bool taken[])
{
    if(i==n){
        for(int j=0; j<n; j++){
            cout<<per[j]<<" ";
        }
        cout<<"\n";
        return;
    }

    for(int j=0; j<n; j++)
    {
        if(taken[j]==false){
            per[i]=a[j];//j=5
            taken[j]=true;
            permutation(i+1, n, a, per, taken);
            taken[j]=false;
        }
    }
}
int main()
{
    int n, i, j;
    cin>>n;

    int a[n], per[n];
    bool taken[n];
    for(i=0; i<n; i++)
    {
        taken[i]=false;
        cin>>a[i];
    }

    permutation(0, n, a, per, taken);


}