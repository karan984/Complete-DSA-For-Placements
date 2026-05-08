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
void left_view(Node* root){
    if(root==NULL)
        return;

    queue<pair<Node*, int>> q;
    Node* curr;
    int l;

    q.push({root, 0});
    int last = -1;

    while(q.empty()==false){
        curr=q.front().first;
        l = q.front().second;

        q.pop();

        if(last!=l){
            cout<<curr->data<<" ";
            last=l;
        }

        if(curr->left)
            q.push({curr->left, l+1});

        if(curr->right)
            q.push({curr->right, l+1});
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

    left_view(root);
}