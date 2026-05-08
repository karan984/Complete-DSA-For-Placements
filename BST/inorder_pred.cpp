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
int inorder_pred(Node* root, int x){
    if(root==NULL){
        return INT_MIN;
    }

    if(root->data>=x){
        return inorder_pred(root->left, x);
    }else{
        return max(inorder_pred(root->right, x), root->data);
    }
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

    int ans = inorder_pred(root, x);

    if(ans!=INT_MIN)
        cout<<ans<<"\n";
    else
        cout<<"Inorder predecessor doesn't exists for this x\n";
}