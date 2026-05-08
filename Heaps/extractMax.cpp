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
int getMax(int a[], int n){
    if(n==0)
        return -1;
    
    return a[0];
}
int extractMax(int a[], int& n){
    if(n==0)
        return -1;

    int temp = a[0];
    swap(a[0], a[n-1]);
    n--;
    max_heapify(a, n, 0);

    return temp;
}
int main()
{
    int n, i, x;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
        cin>>a[i];

    build_maxheap(a, n);

    x=getMax(a, n);
    cout<<x<<" ";
    x = getMax(a, n);
    cout<<x<<" ";

    x = extractMax(a, n);
    cout<<x<<" ";
    x = extractMax(a, n);
    cout<<x<<" ";

    

    
}