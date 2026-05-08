#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;

    Node(int x){
        data=x;
        next=NULL;
    }
};
struct Node* insertAtBegin(struct Node* last, int x){
    struct Node* temp = new Node(x);

    if(last==NULL){
        last=temp;
    }else{
        temp->next=last->next;
    }
    last->next=temp;

    return last;
}
struct Node* insertAtEnd(struct Node* last, int x){
    struct Node* temp = new Node(x);

    if(last==NULL){
        last=temp;
    }else{
        temp->next=last->next;
    }
    last->next=temp;
    last=temp;

    return last;
}
struct Node* insertAtPos(struct Node* last, int pos, int x){
    if(pos==1){
        return insertAtBegin(last, x);
    }
    struct Node* temp = new Node(x);
    struct Node* curr=last->next;

    for(int i=1; i<=pos-2; i++){
        curr=curr->next;
        if(curr==last->next){
            cout<<"Invalid position to insert\n";
            return last;
        }
    }

    temp->next=curr->next;
    curr->next=temp;

    if(curr==last){
        last=temp;
    }
    return last;
}
struct Node* deleteAtBegin(struct Node* last){
    if(last==NULL)
        return NULL;
    
    if(last->next==last){
        free(last);
        return NULL;
    }

    struct Node* temp = last->next;
    last->next=last->next->next;
    free(temp);
    return last;
}
struct Node* deleteAtEnd(struct Node* last){
    if(last==NULL)
        return last;

    if(last->next==last){
        free(last);
        return NULL;
    }

    struct Node* curr=last->next;
    while(curr->next!=last){
        curr=curr->next;
    }
    //temp=curr->next;
    curr->next=curr->next->next;
    free(last);
    last=curr;

    return last;

}
struct Node* deleteAtPos(struct Node* last, int pos){
    if(pos==1){
        return deleteAtBegin(last);
    }
    struct Node* curr=last->next, *temp=NULL;

    for(int i=1; i<=pos-2; i++){
        curr=curr->next;
        if(curr==last){
            cout<<"Invalid position to delete\n";
            return last;
        }
    }

    temp=curr->next;
    curr->next=curr->next->next;

    if(temp==last){
        last=curr;
    }
    free(temp);

    return last;
}
void traverse(struct Node* last){
    if(last==NULL)
        return;

    struct Node* head=last->next, *curr=last->next;

    do{
        cout<<curr->data<<" ";
        curr=curr->next;
    }while(curr!=head);

    cout<<"\n";
}
int main()
{
    struct Node* last = NULL;

    last = insertAtBegin(last, 10);
    last = insertAtBegin(last, 20);
    last = insertAtBegin(last, 30);
    last = insertAtBegin(last, 40);
    last = insertAtBegin(last, 50);
    last = insertAtBegin(last, 60);
    last = insertAtBegin(last, 70);

    // 70, 60, 50, 40, 30, 20, 10
    traverse(last);

    last = insertAtEnd(last, 100);
    last = insertAtEnd(last, 200);
    last = insertAtEnd(last, 300);
    last = insertAtEnd(last, 400);
    last = insertAtEnd(last, 500);

     // 70, 60, 50, 40, 30, 20, 10, 100, 200, 300, 400, 500
     traverse(last);

     last = deleteAtBegin(last);
     traverse(last);

     last = deleteAtEnd(last);
     traverse(last);

     last = insertAtPos(last, 6, 1000);
     traverse(last);

     last = insertAtPos(last, 1, 5000);
     traverse(last);

     last = insertAtPos(last, 14, 50500);
     traverse(last);

     last = insertAtPos(last, 13, 50500);
     traverse(last);

     last = deleteAtPos(last, 7);
     traverse(last);

     last = deleteAtPos(last, 1);
     traverse(last);

     last = deleteAtPos(last, 12);
     traverse(last);

     last = deleteAtPos(last, 11);
     traverse(last);
}