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
    cout << root->val << " ";
    inorder(root->right);
}
void print_In_range(Node *root, int st, int en)
{
    if(root==NULL ) return;
    if (root->val >= st && root->val <= en)
    {
        print_In_range(root->left, st, en);
        cout << root->val<<" ";
        print_In_range(root->right, st, en);
    }
    else if (root->val < st)
        print_In_range(root->right, st, en);
    else
    {
        print_In_range(root->left, st, en);
    }
    return ;
}
int main()
{
    int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
    int k = 5; // node which wanted to be removed
    Node *root = Build_BST(arr, 9);
    int st = 5;
    int en = 12;
    print_In_range(root, st, en);
    cout << endl;
    return 0;
}