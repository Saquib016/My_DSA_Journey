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
}
int kthAncestor(Node *root, int node, int k)  //this function retrn k i.e k se mathch karne ke lie hi ye functin banay hai.
{
    if (root == NULL)
        return -1;
    if (root->val == node )
        return 0;
    int LA = kthAncestor(root->left, node, k);
    int RA = kthAncestor(root->right, node, k);
    if (LA == -1 && RA == -1)
        return -1;
    int valid = LA==-1?RA:LA;
    if(valid+1==k) {
        cout<<"kth Ancestor : "<<root->val<<endl;
    }
    return valid+1;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = Binary_Tree(nodes);
    int node;
    cout << "Enter the Node of needed Element = ";
    cin >> node;
    int k;
    cout << "Entere the kth Level = ";
    cin >> k;
    kthAncestor(root, node, k);
    return 0;
}