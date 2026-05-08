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
void build_maxheap(int a[], int n){
    int i;

    for(i=n/2-1; i>=0; i--){
        max_heapify(a, n, i);
    }
}
void heap_sort(int a[], int n){
    build_maxheap(a, n);

    int i;

    for(i=n-1; i>=1; i--){
        swap(a[i], a[0]);
        max_heapify(a, i, 0);
    }
}
int main()
{
    int n, i;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
        cin>>a[i];

    heap_sort(a, n);

    for(i=0; i<n; i++)
        cout<<a[i]<<" ";

    
}