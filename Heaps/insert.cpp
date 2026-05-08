#include<iostream>
using namespace std;
void max_heapify(int a[], int n, int i){
    int largest = i;

    if(2*i+1<n && a[2*i+1]>a[largest])
        largest = 2*i+1;

    if(2*i+2<n && a[2*i+2]>a[largest])
        largest = 2*i+2;

    if(largest!=i){
        swap(a[i], a[largest]);
        max_heapify(a, n, largest);
    }
}
void max_heapify_bt(int a[], int i){
    while(i!=0){
        int p = (i-1)/2;

        if(a[p]<a[i]){
            swap(a[i], a[p]);
            i=p;
        }else{
            break;
        }
    }
}

/*void max_heapify_bt(int a[], int i){
    if(i==0)
        return;

    int p = (i-1)/2;

    if(a[p]<a[i]){
        swap(a[i], a[p]);
        max_heapify_bt(a, p);
    }
}*/
void insert(int a[], int& n, int x){
    a[n]=x;
    n++;

    max_heapify_bt(a, n-1);
}
void build_maxheap(int a[], int n){
    int i;

    for(i=n/2-1; i>=0; i--){
        max_heapify(a, n, i);
    }
}
int main()
{
    int n, i;
    cin>>n;

    int a[20];

    for(i=0; i<n; i++)
        cin>>a[i];

    build_maxheap(a, n);

    insert(a, n, 16);

    for(i=0; i<n; i++)
        cout<<a[i]<<" ";
    
}