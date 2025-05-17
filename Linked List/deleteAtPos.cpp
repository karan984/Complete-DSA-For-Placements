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
Node* insertAtEnd(Node *head, int x){
    Node * temp = new Node(x);
    Node * t = head;

    if(head==NULL){
        head=temp;
    }else{
        while(t->next!=NULL){
            t=t->next;
        }
        t->next=temp;
    }

    return head;
}
Node* insertAtPos(Node* head, int x, int pos){
    if(pos==1){
        head=insertAtBegin(head, x);
        return head;
    }

    Node* temp = new Node(x);
    Node* t = head;

    for(int i=1; i<=pos-2; i++){
        t=t->next;
        if(t==NULL){
            break;
        }
    }

    if(t==NULL){
        cout<<"Invalid position\n";
        return head;
    }

    temp->next=t->next;
    t->next=temp;

    return head;
}
Node* deleteAtBegin(Node * head){
    if(head==NULL){
        return head;
    }else{
        Node* temp = head;
        head=head->next;
        free(temp);
        return head;
    }
}
Node* deleteAtEnd(Node* head){
    if(head==NULL){
        return NULL;
    }else if(head->next==NULL){
        free(head);
        return NULL;
    }else{
        Node* t = head;
        Node* temp = NULL;

        while(t->next->next!=NULL){
            t=t->next;
        }
        temp=t->next;
        t->next=NULL;
        free(temp);
        return head;
    }
}
Node* deleteAtPos(Node* head, int pos){
    Node* t = head;
    Node* temp = NULL;

    if(pos==1){
        head=deleteAtBegin(head);
        return head;
    }

    for(int i=1; i<=pos-2; i++){
        if(t==NULL){
            break;
        }
        t=t->next;
    }
    if(t==NULL || t->next==NULL){
        cout<<"Invalid position to delete\n";
        return head;
    }
    temp=t->next;
    t->next=t->next->next;
    free(temp);
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

    traverse(head);

    head = insertAtEnd(head, 80);
    head = insertAtEnd(head, 90);
    head = insertAtEnd(head, 100);

    traverse(head);

    head = insertAtPos(head, 200, 5);
    traverse(head);
    head = insertAtPos(head, 300, 6);
    traverse(head);
    head = insertAtPos(head, 400, 1);
    traverse(head);
    head = insertAtPos(head, 500, 14);
    traverse(head);

    head = deleteAtBegin(head);
    traverse(head);

    head = deleteAtEnd(head);
    traverse(head);

    head = deleteAtPos(head, 5);
    traverse(head);

    head = deleteAtPos(head, 1);
    traverse(head);

    head=deleteAtPos(head, 11);
    traverse(head);


}