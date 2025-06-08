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
Node* reverse(Node * head){
    Node* prev = NULL;
    Node* curr=head;
    Node* next = NULL;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    return head;
}
void checkPalindromic(Node * head){
    if(head==NULL){
        cout<<"Its a empty LL\n";
        return;
    }

    Node *slow=head, *fast=head, *t1, *t2;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    if(fast!=NULL){
        slow=slow->next;
    }

    slow=reverse(slow);

    t1=head;
    t2=slow;

    while(t2!=NULL){
        if(t1->data==t2->data){
            t1=t1->next;
            t2=t2->next;
        }else{
            cout<<"Not a palindrome\n";
            return;
        }
    }

    cout<<"Its a palindrome\n";
    return ;

}
int main()
{
    Node *head = NULL;

    head=insertAtBegin(head, 10);
    head=insertAtBegin(head, 20);
    head=insertAtBegin(head, 30);
    head=insertAtBegin(head, 40);
    head=insertAtBegin(head, 500);
    head=insertAtBegin(head, 30);
    head=insertAtBegin(head, 20);
    head=insertAtBegin(head, 10);

    traverse(head);

    checkPalindromic(head);
}