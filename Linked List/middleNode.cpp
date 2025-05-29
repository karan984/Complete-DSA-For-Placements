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
void middleNode(Node* head){
    Node* slow=head, *fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    cout<<"Middle node of the linked list is "<<slow->data<<"\n";
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

    middleNode(head);

    head=insertAtBegin(head, 80);

    traverse(head);
    middleNode(head);
}