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
;
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
vector<int> p;
bool path(Node *root, int n, vector<int> &p)
{
    if (root == NULL)
        return false;
    p.push_back(root->val);
    if (root->val == n)
    {
        return true;
    }
   int isleft=  path(root->left, n, p);
    int isright = path(root->right, n, p);
    if(isleft||isright) return true;
    p.pop_back();
    return false;
}
int LCA(Node *root, int n1, int n2)
{
    vector<int> p1, p2;
    path(root, n1, p1);
    path(root, n2, p2);
    int lca = -1;
    for (int i = 0,j=0; i < p1.size()&&j<p2.size(); i++,j++)
    {
        if(p1[i]!=p2[j]) return lca;
        lca = p1 [i];
    }
    return lca;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = BinaryTree(nodes);
    int n1=4,n2=5;
    cout<<"LCA = "<<LCA(root,n1,n2);
    return 0;

}