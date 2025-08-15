#include<iostream>
#include<stack>
using namespace std;
void push_queue(int x, stack<int> &s1, stack<int> &s2){
    s1.push(x);
}
void pop_queue(stack<int>& s1, stack<int>& s2){
    if(s1.empty()==true){
        cout<<"Queue is empty\n";
        return;
    }

    while(s1.empty()==false){
        s2.push(s1.top());
        s1.pop();
    }

    cout<<"Popped out element is "<<s2.top()<<"\n";
    s2.pop();

    while(s2.empty()==false){
        s1.push(s2.top());
        s2.pop();
    }
}

void front_queue(stack<int>& s1, stack<int>& s2){
    if(s1.empty()==true){
        cout<<"Queue is empty\n";
        return;
    }

    while(s1.empty()==false){
        s2.push(s1.top());
        s1.pop();
    }

    cout<<"Front element of queue is "<<s2.top()<<"\n";
    //s2.pop();

    while(s2.empty()==false){
        s1.push(s2.top());
        s2.pop();
    }
}
int main()
{
    stack<int> s1, s2;

    push_queue(5, s1, s2);
    push_queue(50, s1, s2);
    push_queue(25, s1, s2);
    push_queue(1, s1, s2);
    push_queue(98, s1, s2);

    pop_queue(s1, s2);
    pop_queue(s1, s2);

    front_queue(s1, s2);
    front_queue(s1, s2);
}