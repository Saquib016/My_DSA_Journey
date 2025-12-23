#include<iostream>
#include<vector>
using namespace std;
class Node{
 public:
 int data;
 Node* left;
 Node* right;
 Node(int data){
    this ->data =data;
    this->left=left;
    this->right=right;
 }
};
static int idx =-1;
Node* BuildTree(vector<int> node){
    idx++;
    if(node[idx]==-1) return NULL;
    Node* curr=new Node(node[idx]);
    curr->left=BuildTree(node);
    curr->right=BuildTree(node);
    return curr;
}
int main(){ 
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    cout<<BuildTree(nodes)->data;
    return 0;
}