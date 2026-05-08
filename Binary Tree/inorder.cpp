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
void inorder(Node* curr){
    if(curr==NULL)
        return;

    inorder(curr->left);
    //ans.push_back(curr->data);
    cout<<curr->data<<" ";
    inorder(curr->right);
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

    inorder(root);
}