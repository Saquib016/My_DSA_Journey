#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val = val;
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
int height_BT(Node* root){
    if(root==NULL) return 0;
    int leftbt = height_BT(root->left);
    int rightbt = height_BT(root->right);
    int curr = max(leftbt,rightbt)+1;
    return curr;
}
int main()
{
    vector<int> node = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = BinaryTree(node);  
    cout<<"Height = "<<height_BT(root)<<endl;

    return 0;
}