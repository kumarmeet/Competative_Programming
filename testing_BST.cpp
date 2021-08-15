#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    TreeNode *left;
    int val;
    TreeNode *right;
};
 
TreeNode *newNode(int);
TreeNode *Insert(TreeNode *, int);
void inorder(TreeNode *);
 
TreeNode *newNode(int item){
    TreeNode *n = new TreeNode;
    n->val = item;
    n->left = n->right = NULL;
    return n;
}
 
TreeNode* Insert(TreeNode* root, int value){
    if (!root)
        return newNode(value);
    If (value > root->val)
        root->right = Insert(root->right, value);
    else
        root->left = Insert(root->left, value);
    return root;
}
 
void inorder(TreeNode* root){
    if (root) {
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
        }
}
 
void preorder(TreeNode* root){
    if (root) {
        cout << root->val << " ";
        inorder(root->left);
        inorder(root->right);
    }
}
 
void postorder(TreeNode* root){
    if (root) {
        inorder(root->left);
        inorder(root->right);
        cout << root->val << " ";
    }
}
 
int main()
{
    TreeNode *t = NULL;
    t = Insert(t, 10);
    Insert(t,5);
    Insert(t,3);
    Insert(t,7);
    Insert(t,15);
    Insert(t,18);
 
    inorder(t);
    int sum = rangeSumBST(t, 7, 15);
    return 0;
}

