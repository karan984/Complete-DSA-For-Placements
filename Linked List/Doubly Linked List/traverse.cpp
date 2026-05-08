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
}