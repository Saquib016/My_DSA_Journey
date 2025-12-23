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
Node *insert(Node *root, int node)
{
    if (root == NULL)
    {
        return new Node(node);
    }
    if (root->val > node)
        root->left = insert(root->left, node);
    else
        root->right = insert(root->right, node);
    return root;
}
Node *Build_BST(int arr[], int n)
{
    Node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        root = insert(root, arr[i]);
    }
    return root;
}
int main()
{
    int arr[6] = {5, 1, 3, 4, 2, 7};
    Node *root = Build_BST(arr, 6);
    cout << root->val;
    return 0;
}