#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->data = val;
        left = right = NULL;
    }
};
static int idx = -1;
Node *BinaryTree(vector<int> node)
{
    idx++;
    if (node[idx] == -1)
        return NULL;
    Node *curr = new Node(node[idx]);
    curr->left = BinaryTree(node);
    curr->right = BinaryTree(node);
    return curr;
}
int height(Node *root)
{
    if (root == NULL)
        return 0;
    int leftht = height(root->left);
    int rightht = height(root->right);
    return max(leftht , rightht) + 1;
}
int dia(Node *root)
{
    if (root == NULL)
        return 0;
    int currDia = height(root->left) + height(root->right) + 1;
    int leftdia = dia(root->left);
    int rightdia = dia(root->right);
    return max(currDia,max( leftdia, rightdia));
}
int main()
{
    vector<int> node = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = BinaryTree(node);
    cout<<"Diameter = "<<dia(root);
    return 0;
}