#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> p;

    //enqueue
    p.push(5);
    p.push(10);
    p.push(3);
    p.push(35);
    p.push(20);

    // head - 5, 10, 3, 35, 20 - tail

    cout<<p.size()<<"\n";
    cout<<p.empty()<<"\n";

    cout<<p.front()<<"\n";
    p.pop();

    p.pop();

    cout<<p.size()<<"\n";
    p.push(400);
    // 3, 35, 20, 400

    cout<<p.front()<<"\n";
    cout<<p.back()<<"\n";
}