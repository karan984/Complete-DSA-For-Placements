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
bool search(Node* root, int x)
{
    if(root==NULL)
        return false;

    if(root->data==x)
        return true;
    
    if(root->data>x)
        return search(root->left, x);
    else
        return search(root->right, x);
}
Node* deleteNode(Node* curr, int x){
    if(curr==NULL)
        return curr;

    if(curr->data>x){
        curr->left = deleteNode(curr->left, x);
    }else if(curr->data<x){
        curr->right = deleteNode(curr->right, x);
    }else{
        if(curr->left==NULL && curr->right==NULL){
            delete(curr);
            return NULL;
        }else if(curr->left!=NULL){
            Node* temp = curr->left;
            while(temp->right!=NULL){
                temp=temp->right;
            }
            swap(temp->data, curr->data);
            curr->left=deleteNode(curr->left, x);
        }else{
            Node* temp = curr->right;
            while(temp->left!=NULL){
                temp=temp->left;
            }
            swap(temp->data, curr->data);
            curr->right = deleteNode(curr->right, x);
        }
    }
    return curr;
}
void inorder(Node* curr){
    if(curr==NULL)
        return;

    inorder(curr->left);
    cout<<curr->data<<" ";
    inorder(curr->right);
}
int main()
{
    int n, i, j, x;
    Node* root = NULL;
    cin>>n;
    string input[n];

    for(i=0; i<n; i++)
        cin>>input[i];

    root = construct(input, n);

    cin>>x;

    inorder(root);
    cout<<"\n";

    root = deleteNode(root, x);

    inorder(root);
    cout<<"\n";

}