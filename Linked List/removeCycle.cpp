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

void removeCycle(Node* head){
    Node* slow=head, *fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            break;
        }
    }

    if(fast==NULL || fast->next==NULL){
        cout<<"Cycle not detected\n";
        return;
    }

    slow=head;

    if(fast==slow){
        while(fast->next!=slow){
            fast=fast->next;
        }
        cout<<"Last node of the linked list is "<<fast->data<<" and it is pointing to a node having value "<<fast->next->data<<"\n";
        fast->next=NULL;
        //cout<<"Last node of the linked list is "<<fast->data<<" and it is pointing to a node having value "<<fast->next->data<<"\n";
    }else{
        while(slow->next!=fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        cout<<"Last node of the linked list is "<<fast->data<<" and it is pointing to a node having value "<<fast->next->data<<"\n";
        fast->next=NULL;
        //cout<<"Last node of the linked list is "<<fast->data<<" and it is pointing to a node having value "<<fast->next->data<<"\n";
    }
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

    removeCycle(head);

    formCycle(head, 4);

    removeCycle(head);

    formCycle(head, 1);

    removeCycle(head);

    formCycle(head, 9);

    removeCycle(head);

    
}