#include <iostream>
#include <vector>
#include <algorithm>
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
pair<int, int> dia(Node *root)
{
    if(root == NULL) return make_pair(0,0);
    pair<int, int> leftinfo = dia(root->left);
    pair<int, int> rightinfo = dia(root->right);
    int currDia = leftinfo.second + rightinfo.second + 1;
    int finalDia = max(currDia, max(leftinfo.first, rightinfo.first));
    int finalht = max(leftinfo.second, rightinfo.second) + 1;
    return make_pair(finalDia, finalht);
}
int main()
{
    vector<int> node = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = BinaryTree(node);
    cout << "Diameter = " << dia(root).first;
    return 0;
}