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
};
int count(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftbt = count(root->left);
    int rightbt = count(root->right);
    int curr = leftbt+rightbt+1;
    return curr;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = Binary_Tree(nodes);
    cout<<"The Count Of the Number Of Nodes = "<<count(root);
    return 0;
}