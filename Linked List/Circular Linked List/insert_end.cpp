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
struct Node* insertAtEnd(struct Node* last, int x){
    struct Node* temp = new Node(x);

    if(last==NULL){
        last=temp;
    }else{
        temp->next=last->next;
    }
    last->next=temp;
    last=temp;

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

    // 70, 60, 50, 40, 30, 20, 10

    last = insertAtEnd(last, 100);
    last = insertAtEnd(last, 200);
    last = insertAtEnd(last, 300);
    last = insertAtEnd(last, 400);
    last = insertAtEnd(last, 500);

     // 70, 60, 50, 40, 30, 20, 10, 100, 200, 300, 400, 500
}