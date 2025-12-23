#include <iostream>
#include <vector>
#include<algorithm>
#include<math.h>
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
class Info
{
public:
    bool isBST;
    int min;
    int max;
    int sz;
    Info(int min, int max, bool isBST, int sz)
    {
        this->isBST = isBST;
        this->max = max;
        this->min = min;
        this->sz = sz;
    }
};
static int maxSize = 0;
static Node* root; //for root of the largest bst
Info *largestBST(Node *root)
{
    if(root==NULL) {
        return NULL;
    }
    if(root->left==NULL&&root->right){
      return   new Info(true,root->val,root->val,1);
    }
    Info *leftinfo = largestBST(root->left);
    Info *rightinfo = largestBST(root->right);
    int currmin = min(root->val, min(leftinfo->min, rightinfo->min));
    int currmax = max(root->val, max(leftinfo->max, rightinfo->max));
    int currsz = leftinfo->sz + rightinfo->sz + 1;
    if (leftinfo->isBST && rightinfo->isBST && root->val > leftinfo->max && root->val < rightinfo->min)
    {
        maxSize = max(maxSize, currsz);
        return new Info(true, currmin, currmax, currsz);
    }
    return new Info(false, currmin, currmax, currsz);
}
int main()
{
    Node *root = new Node(6);
    root->left = new Node(5);
    root->left->left = new Node(4);
    root->left->left->left = new Node(3);
    root->right = new Node(7);
    root->right->right = new Node(8);
    root->right->right->right = new Node(9);
    vector<int> vec;
    largestBST(root);
    cout<<maxSize<<endl;
    return 0;
}