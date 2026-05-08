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
void bottom_view(Node* root){
    if(root==NULL)
        return;

    queue<pair<Node*, int>> q;
    Node* curr;
    int left=0, right=0, vl, i;
    q.push({root, 0});

    unordered_map<int, int> mp;

    while(q.empty()==false){
        curr=q.front().first;
        vl=q.front().second;

        q.pop();

        mp[vl]=curr->data;
        left=min(left, vl);
        right=max(right, vl);

        if(curr->left)
            q.push({curr->left, vl-1});

        if(curr->right)
            q.push({curr->right, vl+1});
    }

    for(i=left; i<=right; i++)
    {
        cout<<mp[i]<<" ";
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

    bottom_view(root);
}