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
bool Isidentical(Node *root1, Node *root2)
{
    if (root1 == NULL && root2 == NULL)
        return true;
    else if (root1 == NULL || root2 == NULL)
        return false;
    if (root1->val != root2->val)
        return false;
    return Isidentical(root1->left, root2->left) && Isidentical(root1->right, root2->right);
}
bool ISSub(Node *root, Node *SubRoot)
{
    if (root == NULL && SubRoot == NULL)
    {
        return true;
    }
    else if (root == NULL || SubRoot == NULL)
        return false;
    if (root->val == SubRoot->val)
    {
        // ISIDentical for Subtree
        if (Isidentical(root, SubRoot))
            return true; // jab pooora true hoga tab hi true return hoga otherwise false me neeche jaegaa and unko execute karna hoga
    }
    ISSub(root->left, SubRoot);
    if (!(ISSub(root->left, SubRoot)))
        return ISSub(root->right, SubRoot);
    return true;
}
int main()
{
    vector<int> nodes1 = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    vector<int> nodes2 = {2, 4, -1, -1, 5, -1, -1};
    Node *root = BinaryTree(nodes1);
    Node *Subroot = BinaryTree(nodes2);
    cout << ISSub(root, Subroot);
    return 0;
}