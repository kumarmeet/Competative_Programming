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
class Solution {
public:
    vector<int> v;
    int getMinimumDifference(TreeNode* root) {
        if(root){
            preorder(root);
        }
        sort(v.begin(), v.end(), greater<int>());
        
        vector<int> min;
        //6, 4, 3, 2, 1
        for(int i = 0; i < v.size() - 1; i++){
            min.push_back(v[i] - v[i + 1]);
        }
        
        return *min_element(min.begin(), min.end());
    }
    
    void preorder(TreeNode* root){
        if(root){
            v.push_back(root->val);
            preorder(root->left);
            preorder(root->right);
        }
    }
};
