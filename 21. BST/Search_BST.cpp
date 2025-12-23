#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        left = right = NULL;
    }
};
Node* insert(Node* root,int x){
    if(root==NULL) {
        root = new Node(x);
        return root;
    }
    if(root->val>x){
        root->left = insert(root->left,x);
    }
    else root->right = insert(root->right,x);
    return root;
}
Node* Build_BST(int arr[],int n){
    Node* root = NULL;
    for (int  i = 0; i < n; i++)
    {
        root = insert(root,arr[i]);
    }
    return root;
}
void inorder(Node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->val;
    inorder(root->right);
    return;
}
bool search_BST(Node* root,int k){
    if(root == NULL) return false;
    if(root->val == k) return true;
    if(k>root->val) return search_BST(root->right,k);
    else if(k<root->val) return search_BST(root->left, k);
    return false;
}
int main(){
    int arr[6] = {8,5,9,3,4,7};
    Node* root = Build_BST(arr,6);
    cout<<root->val<<endl;
    inorder(root);
    cout<<endl;
    cout<<search_BST(root,7);
    return 0;
}