#include <iostream>
#include <queue>
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
void kthtraversalLevel(Node *root, int k)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    int i = 1;
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        if (curr == NULL)
        {
            if (q.empty())
                break;
            if (!q.empty())
            {
                q.push(NULL);
                i++;
            }
        }
        else
        {
            if (i == k)
                cout << curr->val << " ";
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
    return;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = BinaryTree(nodes);
    kthtraversalLevel(root, 3);
    return 0;
}