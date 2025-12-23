#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node( int val){
        this->val = val;
        left = right = NULL;
    }
};
void getInorder(Node* root,vector<int> &node){
    if(root == NULL) return ;
    getInorder(root->left,node);
    node.push_back(root->val);
    getInorder(root->right,node);
    return;
}
Node* Build_BST(vector<int> node, int st,int en){
    if(st>en) return NULL;
    int mid = st+(en-st)/2;
    Node* curr = new Node(node[mid]);
    curr->left = Build_BST(node,st,mid-1);
    curr->right = Build_BST(node,mid+1,en);
    return curr;
}
Node* MergeBST(Node* root1,Node* root2){
    vector<int> nodes1,nodes2,merged;
    getInorder(root1,nodes1);
    getInorder(root2,nodes2);
    int i=0,j=0;
    while (i<nodes1.size()&&j<nodes2.size())
    {
        if(nodes1[i]<nodes2[j]) merged.push_back(nodes1[i++]);
        else merged.push_back(nodes2[j++]);
    }
    while (i<nodes1.size())
    {
        merged.push_back(nodes1[i++]);

    }
    while (j<nodes2.size())
    {
        merged.push_back(nodes2[j++]);
    }
    
    Node* merRoot  = Build_BST(merged,0,merged.size()-1);
    return merRoot;

}
void preorder(Node* root){
    if(root  == NULL) return ;
    cout<<root->val<< " ";
    preorder(root->left);
    preorder(root->right);
    return;
}
int main(){
    Node* root1 = new Node(2);
    root1->left = new Node(1);
    root1->right = new Node(4);

    Node* root2 = new Node(9);
    root2->left  = new Node(3);
    root2->right = new Node(12);
    Node* root=  MergeBST(root1,root2);
    preorder(root);
    cout<<endl;
    return 0;
}