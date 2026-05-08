#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* prev;
    struct Node* next;

    Node(int x){
        data = x;
        prev=next=NULL;
    }
};
struct Node* insertAtBegin(struct Node* head, int x){
    struct Node* temp = new Node(x);

    temp->next = head;
    if(head!=NULL){
        head->prev = temp;
    }
    head = temp;

    return head;
}
struct Node* insertAtEnd(struct Node* head, int x){
    struct Node* temp = new Node(x);
    if(head==NULL){
        head=temp;
        return head;
    }
    struct Node* curr = head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}
struct Node* insertAtPos(struct Node* head, int pos, int x){
    if(pos==1){
        return insertAtBegin(head, x);
    }
    struct Node* temp = new Node(x);
    struct Node* curr = head;

    for(int i=1; i<=pos-2; i++){
        curr=curr->next;
        if(curr==NULL){
            printf("Invalid position mentioned to insert a new node\n");
            return head;
        }
    }

    temp->next=curr->next;
    if(curr->next)
        curr->next->prev = temp;
    curr->next = temp;
    temp->prev = curr;

    return head;

}
struct Node* deleteAtBegin(struct Node* head){
    if(head==NULL)
        return head;

    struct Node* temp = head;
    head = head->next;

    if(head!=NULL){
        head->prev=NULL;
    }
    free(temp);
    return head;
}
struct Node* deleteAtEnd(struct Node* head){
    if(head==NULL)
        return head;
    
    if(head->next==NULL){
        free(head);
        return NULL;
    }

    struct Node* curr = head;

    while(curr->next->next!=NULL){
        curr=curr->next;
    }

    /*struct Node* temp = curr->next;
    curr->next=NULL;
    free(temp);*/

    free(curr->next);
    curr->next=NULL;
    return head;
}
void traverse(struct Node* head){
    struct Node* curr = head;

    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<"\n";
}
int main()
{
    struct Node* head = NULL;

    head = insertAtBegin(head, 10);
    head = insertAtBegin(head, 20);
    head = insertAtBegin(head, 30);
    head = insertAtBegin(head, 50);
    head = insertAtBegin(head, 70);
    head = insertAtBegin(head, 100);

    traverse(head);

    head = insertAtEnd(head, 1000);
    head = insertAtEnd(head, 2000);
    head = insertAtEnd(head, 3000);
    traverse(head);

    head = insertAtPos(head, 7, 500);
    traverse(head);

    head = insertAtPos(head, 11, 5005);
    traverse(head);

    head = insertAtPos(head, 1, 5500);
    traverse(head);

    head = insertAtPos(head, 14, 5500);
    traverse(head);

    head = deleteAtBegin(head);
    traverse(head);

    head = deleteAtEnd(head);
    traverse(head);
}