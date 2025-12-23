#include <iostream>
#include <vector>
#include <queue>
#include<map>
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
Node *buildtree(vector<int> node)
{
    idx++;
    if (node[idx] == -1)
        return NULL;
    Node *curr = new Node(node[idx]);
    curr->left = buildtree(node);
    curr->right = buildtree(node);
    return curr;
}
void Topview(Node *root)
{
    queue<pair<Node *, int>> Q;
    map<int,int> m;
    Q;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = buildtree(nodes);
    return 0;
}