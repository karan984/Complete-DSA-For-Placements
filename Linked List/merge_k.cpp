#include<iostream>
#include<queue>
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
bool compare(Node* a, Node* b){
    if(a->data >= b->data)
        return true;
    return false;
}
Node* merge_k(Node* arr[], int k){
    priority_queue<Node*, vector<Node*>, decltype(&compare)> q(compare);

    int i;
    Node* dummy = new Node(-1);
    Node* tail = dummy;
    Node * curr=NULL;

    for(i=0; i<k; i++)
        q.push(arr[i]);

    while(q.empty()==false){
        curr = q.top();
        q.pop();

        tail->next = curr;
        tail=tail->next;
        //cout<<tail->data<<"\n";

        if(curr->next!=NULL){
            q.push(curr->next);
        }
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
    Node *arr[5] = {NULL, NULL, NULL, NULL, NULL};

    arr[0]=insertAtBegin(arr[0], 20);
    arr[0]=insertAtBegin(arr[0], 12);
    arr[0]=insertAtBegin(arr[0], 8);
    arr[0]=insertAtBegin(arr[0], 1);

    arr[1] = insertAtBegin(arr[1], 13);
    arr[1] = insertAtBegin(arr[1], 9);
    arr[1] = insertAtBegin(arr[1], 5);
    arr[1] = insertAtBegin(arr[1], 2);

    arr[2] = insertAtBegin(arr[2], 20);
    arr[2] = insertAtBegin(arr[2], 18);
    arr[2] = insertAtBegin(arr[2], 9);

    arr[3] = insertAtBegin(arr[3], 17);
    arr[3] = insertAtBegin(arr[3], 12);
    arr[3] = insertAtBegin(arr[3], 7);

    arr[4] = insertAtBegin(arr[4], 20);
    arr[4] = insertAtBegin(arr[4], 6);
    arr[4] = insertAtBegin(arr[4], 4);

    traverse(arr[0]);
    traverse(arr[1]);
    traverse(arr[2]);
    traverse(arr[3]);
    traverse(arr[4]);

    Node *merged = merge_k(arr, 5);

    traverse(merged);


}