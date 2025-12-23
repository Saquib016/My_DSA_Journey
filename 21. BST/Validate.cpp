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
bool validate(Node *root, Node *min, Node *max)
{
    if (root == NULL)
        return true;
    if (min != NULL && root->val < min->val)
        return false;
    if (max != NULL && root->val > max->val)
        return false;
    return validate(root->left, min, root) &&
           validate(root->right, root, max);
}
int main()
{
    int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
    int k = 5; // node which wanted to be removed
    Node *root = Build_BST(arr, 9);
    root->val = 15;
    cout<<validate(root, NULL, NULL);
    cout << endl;
    return 0;
}