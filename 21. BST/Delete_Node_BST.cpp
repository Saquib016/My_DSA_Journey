#include <iostream>
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
Node *insert(int node, Node *root)
{
    if (root == NULL)
    {
        root = new Node(node);
        return root;
    }
    if (root->val > node)
        root->left = insert(node, root->left);
    if (root->val < node)
        root->right = insert(node, root->right);
    return root;
}
Node *Build_BST(int arr[], int n)
{
    Node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        root = insert(arr[i], root);
    }
    return root;
}
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->val<<" ";
    inorder(root->right);
}
Node *IN_Succ(Node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
Node *del_Node(Node *root, int k)
{
    if (root == NULL)
        return NULL;
    if (k > root->val)
        root->right = del_Node(root->right, k);
    else if (k < root->val)
       root->left = del_Node(root->left, k);
    else if (root->val == k)
    {
        if (root->left && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        if (root->left == NULL || root->right == NULL)
        {
            Node *res = (root->left == NULL) ? root->right : root->left;
            return res;
        }
        else if (root->left != NULL && root->right != NULL)
        {
            Node *curr = IN_Succ(root->right);
            root->val = curr->val;
            root->right= del_Node(root->right,curr->val);
            return root;
        }
    }
    return root;
}
int main()
{
    int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
    int k = 5; // node which wanted to be removed
    Node *root = Build_BST(arr, 9);
    cout << root->val << endl;
    inorder(root);
    cout<<endl;
    del_Node(root,k);
    inorder(root);
    cout<<endl;
    return 0;
}