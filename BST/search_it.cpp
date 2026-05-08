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
bool search_iterative(Node* root, int x){
    Node* curr = root;

    while(curr!=NULL){
        if(curr->data==x){
            return true;
        }
        if(curr->data>x)
            curr=curr->left;
        else
            curr=curr->right;
    }

    return false;
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

    bool ans = search_iterative(root, x);

    if(ans)
        cout<<"x found\n";
    else
        cout<<"x not found\n";
}