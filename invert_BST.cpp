class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root){
           TreeNode* temp = root->left; 
           root->left = root->right;
           root->right = temp;
           root->left = invertTree(root->left) ;
           root->right = invertTree(root->right) ;
           return root;
        }
        return NULL;
    }
};
