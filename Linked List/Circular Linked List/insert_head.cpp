#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;

    Node(int x){
        data=x;
        next=NULL;
    }
};
struct Node* insertAtBegin(struct Node* last, int x){
    struct Node* temp = new Node(x);

    if(last==NULL){
        last=temp;
    }else{
        temp->next=last->next;
    }
    last->next=temp;

    return last;
}
int main()
{
    struct Node* last = NULL;

    last = insertAtBegin(last, 10);
    last = insertAtBegin(last, 20);
    last = insertAtBegin(last, 30);
    last = insertAtBegin(last, 40);
    last = insertAtBegin(last, 50);
    last = insertAtBegin(last, 60);
    last = insertAtBegin(last, 70);
}