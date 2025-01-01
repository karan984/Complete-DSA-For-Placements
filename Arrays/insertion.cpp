#include<iostream>
using namespace std;
void insertAtEnd(int a[], int x, int &n, int size)
{
    if(n==size){
        cout<<"Array if full\n";
    }else{
        a[n]=x;
        n++;
    }
}
void traverse(int a[], int n)
{
    int i;

    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
void insertAtBegin(int a[], int x, int&n, int size)
{
    if(n==size){
        cout<<"Array is full\n";
    }else{
        for(int i=n-1; i>=0; i--){
            a[i+1]=a[i];
        }
        a[0]=x;
        n++;
    }
}
void insertAtIndex(int a[], int x, int index, int &n, int size){
    if(n==size){
        cout<<"Array is full\n";
    }else{
        for(int i=n-1; i>=index; i--){
            a[i+1]=a[i];
        }
        a[index]=x;
        n++;
    }
}
int main()
{
    int size, i, x, n=0;

    cin>>size;

    int a[size];

    insertAtEnd(a, 3, n, size);
    insertAtEnd(a, 5, n, size);
    insertAtEnd(a, 9, n, size);
    insertAtEnd(a, 12, n, size);

    traverse(a, n);

    insertAtBegin(a, 100, n, size);

    traverse(a, n);

    insertAtIndex(a, 200, 2, n, size);
    traverse(a, n);

    insertAtIndex(a, 300, 2, n, size);
    traverse(a, n);
    
    insertAtIndex(a, 400, 2, n, size);

    traverse(a, n);
}