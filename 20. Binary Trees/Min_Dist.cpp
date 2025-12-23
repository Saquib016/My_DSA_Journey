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
        this->left = NULL;
        this->right = NULL;
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

Node *LCA(Node *root, int n1, int n2)
{
    if (root == NULL)
        return NULL;
    if (root->val == n1 || root->val == n2)
        return root;
    Node *LLCA = LCA(root->left, n1, n2);
    Node *RLCA = LCA(root->right, n1, n2);
    if (LLCA != NULL && RLCA != NULL)
        return root;
    return (LLCA == NULL) ? RLCA : LLCA;

}
int dist(Node *root, int n)
{
    if (root == NULL)
        return -1;
    if (root->val == n)
    {
        return 0;
    }
    int leftdist = dist(root->left, n);
    if (leftdist != -1)
        return leftdist + 1;
    int rightdist = dist(root->right, n);
    if (rightdist != -1)
        return rightdist + 1;
    return -1;
}
int mindist(Node *root, int n1, int n2)
{
    Node *lca = LCA(root, n1, n2);
    int dist1 = dist(lca, n1);
    int dist2 = dist(lca, n2);
    return dist1 + dist2;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = BinaryTree(nodes);
    int n1 = 4, n2 = 6;
    cout << mindist(root, n1, n2);
    return 0;
}