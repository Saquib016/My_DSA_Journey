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
void printpath(vector<int> &path)
{
    for (int i = 0; i < path.size(); i++)
    {
        cout << path[i] << " ";
    }
    cout << endl;
}
void pathHelper(Node *root, vector<int> path)
{
    if (root == NULL)
        return;
    path.push_back(root->val);
    if (root->left == NULL && root->right == NULL)
    {
        printpath(path);
        path.pop_back();
        return;
    }
    pathHelper(root->left, path);
    pathHelper(root->right, path);
    path.pop_back();
    return;
}
void rootToleaf(Node *root)
{
    vector<int> path;
    pathHelper(root, path);

    return;
}
int main()
{
    int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
    int k = 5; // node which wanted to be removed
    Node *root = Build_BST(arr, 9);
    int st = 5;
    int en = 12;
    rootToleaf(root);
    cout << endl;
    return 0;
}