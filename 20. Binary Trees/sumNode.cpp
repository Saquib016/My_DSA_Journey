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
static int idx =-1;
Node* BT(vector<int> node){
    idx++;
    if(node[idx]==-1) return NULL;
    Node* curr = new Node(node[idx]);
    curr->left = BT(node);
    curr->right = BT(node);
    return curr;
}
int Sum(Node* root){
    if(root ==NULL) return 0;
    int rBT = Sum(root->left);
    int lBT = Sum(root->right);
    return rBT+lBT+root->val;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = BT(nodes);
    cout<<"The Sum of the Nodes = "<<Sum(root);
    return 0;
}