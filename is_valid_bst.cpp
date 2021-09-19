/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

void inorder(TreeNode* root, vector<int> & v) {
    if(!root) {
        return;
    }

    inorder(root->left, v);
    v.push_back(root->val); // 1 2 3 4 5
    inorder(root->right, v);
}

bool isValidBST(TreeNode* root) {
    vector<int> v;
    inorder(root, v);
    for(int i = 1; i < v.size(); i++) {
        if(v[i - 1] >= v[i])
            return false;
    }
    return true;
}
