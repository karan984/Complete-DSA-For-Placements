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
struct Node* reverse(struct Node* head){
    struct Node* prev = NULL;
    struct Node* curr = head;
    struct Node* next = NULL;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    head=prev;

    return head;
}
int findLength(struct Node* head){
    int len=0;
    struct Node* temp = head;

    while(temp!=NULL){
        len++;
        temp=temp->next;
    }

    return len;

}
struct Node* sum_ll(struct Node* h1, struct Node* h2){
    int carry=0;
    struct Node* head = h1;

    while(true){
        int x;
        x = h1->data;
        x = x + (h2!=NULL ? h2->data : 0);
        x = x+carry;

        h1->data = (x%10);
        carry = x/10;

        if(h1->next==NULL)
            break;
        h1 = h1->next;
        if(h2!=NULL)
            h2 = h2->next;
    }

    if(carry){
        h1->next = new Node(carry);
    }

    return head;

}
int main()
{
    struct Node* h1 = NULL;
    struct Node* h2 = NULL;
    struct Node* ans = NULL;
    int n1, n2;

    h1=insertAtBegin(h1, 9);
    h1=insertAtBegin(h1, 3);
    h1=insertAtBegin(h1, 9);
    h1=insertAtBegin(h1, 9);

    h2 = insertAtBegin(h2, 7);
    h2 = insertAtBegin(h2, 8);
    h2 = insertAtBegin(h2, 8);

    h1 = reverse(h1);
    h2 = reverse(h2);

    n1 = findLength(h1);
    n2 = findLength(h2);

    if(n1>=n2){
        ans=sum_ll(h1, h2);
    }else{
        ans=sum_ll(h2, h1);
    }

    ans = reverse(ans);

    traverse(ans);
}