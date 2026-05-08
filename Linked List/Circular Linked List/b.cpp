#include<iostream>
using namespace std;
int main()
{
    int a=-10;

    for(int i=1; i<33; i++)
    {
        a=a>>1;
        cout<<a<<" ";
    }
}