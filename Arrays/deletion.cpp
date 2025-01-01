#include<iostream>
using namespace std;
void deleteAtEnd(int a[], int &n){
    if(n==0){
        cout<<"Array is empty\n";
    }else{
        //a[n-1]=-1;
        n--;
    }
}
void traverse(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" "; 
    }
    cout<<"\n";
}
void deleteAtBegin(int a[], int& n)
{
    if(n==0){
        cout<<"Array is empty\n";
    }else{
        for(int i=1; i<=n-1; i++)
        {
            a[i-1]=a[i];
        }
        //a[n-1]=-1;
        n--;
    }
}
void deleteAtIndex(int a[], int index, int& n)
{
    if(index>=n){
        cout<<"Invalid Index\n";
    }else if(n==0){
        cout<<"Array is empty\n";
    }else{
        for(int i=index+1; i<=n-1; i++)
        {
            a[i-1]=a[i];
        }
        //a[n-1]=-1;
        n--;
    }
}
int main()
{
    int a[10]={3, 5, 7, 12, 20, 10, 12, 15, -1, -1};
    int size=10, n=8;

    deleteAtEnd(a, n);

    traverse(a, n);

    deleteAtBegin(a, n);

    traverse(a, n);

    deleteAtIndex(a, 2, n);

    traverse(a, n);
}