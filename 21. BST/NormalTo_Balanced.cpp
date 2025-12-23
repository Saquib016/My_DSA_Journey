#include <iostream>
#include <vector>
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
void inorder(Node *root, vector<int> &vec)
{
    if (root == NULL)
        return;
    inorder(root->left, vec);
    vec.push_back(root->val);
    inorder(root->right, vec);
    return;
}
Node *Balanced_BST(vector<int> &vec, int st, int en)
{
    int mid = st + (en - st) / 2;
    if (st > en)
    {
        return NULL;
    }
    Node *curr = new Node(vec[mid]);
    curr->left = Balanced_BST(vec, st, mid - 1);
    curr->right = Balanced_BST(vec, mid + 1, en);
    return curr;
}
void preorder(Node* root){
    if(root  == NULL) return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
    return;
}
int main()
{
    Node *root = new Node(6);
    root->left = new Node(5);
    root->left->left = new Node(4);
    root->left->left->left = new Node(3);
    root->right = new Node(7);
    root->right->right = new Node(8);
    root->right->right->right = new Node(9);
    vector<int> vec;
    inorder(root, vec);
    Node* newroot = Balanced_BST(vec,0,vec.size()-1);
    preorder(newroot);
    return 0;
}