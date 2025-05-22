#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node * next;

    Node(int x){
        data=x;
        next=NULL;
    }
};
Node* insertAtBegin(Node *head, int x){
    Node *temp = new Node(x);
    temp->next=head;
    head=temp;

    return head;
}
void traverse(Node* head){
    Node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}
void formCycle(Node* head, int pos){
    Node* tail=head, *t=head;

    for(int i=1; i<=pos-1; i++){
        t=t->next;
    }

    while(tail->next!=NULL){
        tail=tail->next;
    }

    tail->next=t;
}

int main()
{
    Node *head = NULL;

    head=insertAtBegin(head, 10);
    head=insertAtBegin(head, 20);
    head=insertAtBegin(head, 30);
    head=insertAtBegin(head, 40);
    head=insertAtBegin(head, 50);
    head=insertAtBegin(head, 60);
    head=insertAtBegin(head, 70);
    head=insertAtBegin(head, 80);
    head=insertAtBegin(head, 90);
    traverse(head);

    formCycle(head, 4);

    /*Node* t=head;

    for(int i=1; i<=8; i++){
        t=t->next;
    }

    cout<<t->next->data;*/
    
}