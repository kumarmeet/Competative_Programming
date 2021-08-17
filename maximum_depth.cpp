class Solution
{
public:
    int maxDepth(TreeNode* root)
    {
        int x, y;
        if(!root)
            return 0;
        x = maxDepth(root->left);
        y = maxDepth(root->right);
        return x > y ? x + 1 : y + 1;
    }
};
