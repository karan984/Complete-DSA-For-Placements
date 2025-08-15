#include<iostream>
#include<queue>
using namespace std;
void push_stack(int x, queue<int>& q1, queue<int>& q2){
    while(q1.empty()==false){
        q2.push(q1.front());
        q1.pop();
    }
    q1.push(x);

    while(q2.empty()==false){
        q1.push(q2.front());
        q2.pop();
    }
}
void pop_stack(queue<int>& q1, queue<int>& q2){
    if(q1.empty()==true){
        cout<<"Stack is empty\n";
        return;
    }

    int x=q1.front();
    q1.pop();

    cout<<"Popped out element is "<<x<<"\n";
}

void top_stack(queue<int>& q1, queue<int>& q2){
    if(q1.empty()==true){
        cout<<"Stack is empty\n";
        return;
    }

    int x=q1.front();
    //q1.pop();

    cout<<"Element at top of stack is "<<x<<"\n";
}
int main()
{
    queue<int> q1, q2;

    push_stack(5, q1, q2);
    push_stack(50, q1, q2);
    push_stack(2, q1, q2);
    push_stack(12, q1, q2);
    push_stack(18, q1, q2);

    pop_stack(q1, q2);
    pop_stack(q1, q2);

    top_stack(q1, q2);
    top_stack(q1, q2);
}