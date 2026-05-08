#include<iostream>
#include<queue>
using namespace std;
typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data=x;
        left=right=NULL;
    }
}Node;
// struct Node*, Node*
Node* construct(string input[], int n){
    Node* root = NULL, *curr=NULL;
    queue<Node*> q;
    int i;
    if(n==0)
        return NULL;

    root = new Node(stoi(input[0]));
    q.push(root);

    i=1;

    while(i<n){
        curr = q.front();
        q.pop();

        if(input[i]!="N"){
            curr->left = new Node(stoi(input[i]));
            q.push(curr->left);
        }
        i++;

        if(i<n && input[i]!="N"){
            curr->right = new Node(stoi(input[i]));
            q.push(curr->right);
        }
        i++;
    }

    return root;

}
Node* findPred(Node* curr){
    Node* temp =curr->left;
    while(temp->right!=NULL && temp->right!=curr){
        temp=temp->right;
    }
    return temp;
}
void morris_traversal(Node* root){
    Node* curr = root, *pred;

    while(curr!=NULL){
        if(curr->left!=NULL){
            pred = findPred(curr);

            if(pred->right==NULL){
                pred->right=curr;
                curr=curr->left;
            }else{
                pred->right=NULL;
                cout<<curr->data<<" ";
                curr=curr->right;
            }
        }else{
            cout<<curr->data<<" ";
            curr=curr->right;
        }
    }
    cout<<"\n";
}
int main()
{
    int n, i, j;
    Node* root = NULL;
    cin>>n;
    string input[n];

    for(i=0; i<n; i++)
        cin>>input[i];

    root = construct(input, n);

    morris_traversal(root);
}