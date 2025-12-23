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
Node *insert(int x, Node *root)
{
    if (root == NULL)
        return new Node(x);
    if (root->left != NULL)
    {
        if (root->val > x)
            return insert(x, root->left);
    }
    if (root->right != NULL)
    {
        if (root->val < x)
            return insert(x, root->right);
    }
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
int main()
{
     int arr[6] = {5, 1, 3, 4, 2, 7};
    Node *root = Build_BST(arr, 6);
    cout << root->val;
    return 0;
}