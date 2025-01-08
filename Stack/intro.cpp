#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;

    s.push(10);
    s.push(8);
    s.push(5);
    s.pop();
    cout<<s.top()<<"\n";
    s.push(20);
    cout<<s.size()<<"\n";
    cout<<s.empty()<<"\n";
    s.push(100);
    cout<<s.top()<<"\n";
    s.pop();
    s.pop();
    cout<<s.top()<<"\n";
}