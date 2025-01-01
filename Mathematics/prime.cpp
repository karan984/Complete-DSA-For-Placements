#include<iostream>
using namespace std;
//This code is written by Karan Mashru
int main()
{
    int n, i, prime=true;

    cin>>n;

    //This code is written by Karan Mashru
    for(i=2; i<=sqrt(n); i++)
    {
        if((n%i)==0){
            prime=false;
            break;
        }
    }

    //This code is written by Karan Mashru
    if(prime && n!=1){
        cout<<"Number is prime\n";
    }else{
        cout<<"Number is not prime\n";
    }
}
//This code is written by Karan Mashru