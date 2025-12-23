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

static int idx = -1;
Node *Binary_Tree(vector<int> node)
{
    idx++;
    if (node[idx] == -1)
    return NULL;
    Node *curr = new Node(node[idx]);
    curr->left = Binary_Tree(node);
    curr->right = Binary_Tree(node);
    return curr;
}
void PostOrder(Node* root){
    if(root == NULL) return;
    PostOrder(root->left);
    PostOrder(root-> right);
    cout <<root->val<<" ";
}
int transform(Node* root){
    if(root==NULL) return 0;
    int leftold =transform (root->left);
    int rightold = transform(root->right);
    int currold = root->val;
    root->val = leftold+rightold;
    if(root->left!=NULL)root->left->val;
    if(root->right!=NULL) root->right->val;
    return currold;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = Binary_Tree(nodes);
    cout<<transform(root);
    
    PostOrder(root);
    return 0;
}