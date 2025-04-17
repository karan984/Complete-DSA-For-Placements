#include<iostream>
using namespace std;
void bubble_sort(int n, int a[])
{
    int i, c, sw_c;

    for(c=1; c<=n-1; c++){
        sw_c=0;
        for(i=0; i<n-1; i++){
            if(a[i]>a[i+1]){
                swap(a[i], a[i+1]);
                sw_c++;
            }
        }
        if(sw_c==0){
            break;
        }
    }
}
int main()
{
    int n, i;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    bubble_sort(n, a);

    for(i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}