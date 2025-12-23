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
        this->left = NULL;
        this->right=NULL; 
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
Node* LCA_Approach_2(Node* root,int n1,int n2){
    if(root==NULL) return NULL;
    if(root->val==n1||root->val==n2){
        return root;
    }
    Node* LLCA = LCA_Approach_2(root->left,n1,n2);
    Node* RLCA =  LCA_Approach_2(root->right,n1,n2);
    if(LLCA!=NULL&&RLCA==NULL) return LLCA;
    else if(LLCA==NULL&&RLCA==NULL) {return NULL;}
    else if(LLCA==NULL&&RLCA!=NULL) return RLCA;
    else return root;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = BinaryTree(nodes);
    int n1=4,n2=5;
    cout<<LCA_Approach_2(root,n1,n2)->val;
    return 0;
}