#include <iostream>
#include<array>
using namespace std;
class Node
{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        left = right = NULL;
    }
};
Node* Balanced_BST(int arr[],int st,int en){
    if(st>en) return NULL; 
    int mid = st + (en-st)/2;
    Node* root = new Node(arr[mid]);
    root->left = Balanced_BST(arr,st,mid-1);
    root->right = Balanced_BST(arr,mid+1,en);
    return root;
}
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    int arr[7] = {3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    Node* root = Balanced_BST(arr,0,size-1);
    cout<<root->val<<endl;
    preorder(root);
    return 0;
}