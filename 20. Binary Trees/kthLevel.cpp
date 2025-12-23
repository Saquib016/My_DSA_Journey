#include <iostream>
#include <queue>
#include <vector>
#include<queue>
#include<stack>
#include<algorithm>
#include<deque>
#include<iterator>
#include<array>

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
void kthhelper(Node *root, int k, int currl)
{
    if (root == NULL)
        return;
    if (currl == k)
    {
        cout << root->val << " ";
    }
    Node *curr = root;
    if (curr->left != NULL)
    {
        kthhelper(curr->left, k, currl + 1);
    }
    if (curr->right != NULL)
    {

        kthhelper(curr->right, k, currl + 1);
    }
    return;
}
void kthLevel(Node *root, int k)
{
    kthhelper(root, k, 1);
    cout<<endl;
   return;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = BinaryTree(nodes);
    kthLevel(root, 2); 
    return 0;
}