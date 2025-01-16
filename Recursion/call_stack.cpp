#include<iostream>
using namespace std;
void b(){
    cout<<"B\n";
}
void a(){
    cout<<"A1\n";
    b();
    cout<<"A2\n";
}
int main()
{
    cout<<"main_start\n";
    a();
    cout<<"main_end\n";
}