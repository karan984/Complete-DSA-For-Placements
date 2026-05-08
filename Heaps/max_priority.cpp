#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> q;

    q.push(10);
    q.push(30);
    q.push(15);
    q.push(20);

    //q.front()
    cout<<q.top()<<" "<<q.size()<<"\n";
    q.pop();

    q.push(40);

    while(q.empty()==false){
        cout<<q.top()<<" "<<q.size()<<"\n";
        q.pop();
    }
}