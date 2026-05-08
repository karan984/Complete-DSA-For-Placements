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
Node* merge_two(Node* h1, Node* h2){
    Node* dummy = new Node(-1);
    Node* tail = dummy;
    Node* c1=h1, *c2=h2;

    while(c1!=NULL && c2!=NULL){
        if(c1->data<=c2->data){
            tail->next = c1;
            c1=c1->next;
        }else{
            tail->next = c2;
            c2=c2->next;
        }
        tail=tail->next;
    }

    if(c1!=NULL){
        tail->next=c1;
    }else{
        tail->next = c2;
    }

    return dummy->next;
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
    Node *head1 = NULL;
    Node *head2 = NULL;

    head1=insertAtBegin(head1, 15);
    head1=insertAtBegin(head1, 13);
    head1=insertAtBegin(head1, 9);
    head1=insertAtBegin(head1, 5);
    head1=insertAtBegin(head1, 1);

    head2 = insertAtBegin(head2, 18);
    head2 = insertAtBegin(head2, 12);
    head2 = insertAtBegin(head2, 4);
    head2 = insertAtBegin(head2, 3);

    traverse(head1);
    traverse(head2);

    Node *merged = merge_two(head1, head2);

    traverse(merged);


}