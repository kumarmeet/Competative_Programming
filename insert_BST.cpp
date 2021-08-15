struct TreeNode
{
    TreeNode *left;
    int val;
    TreeNode *right;
};

class Solution
{
public:
    TreeNode *insertIntoBST(TreeNode *root, int val)
    {
        if (!root)
            return newNode(val);
        if (val > root->val)
            root->right = insertIntoBST(root->right, val);
        else
            root->left = insertIntoBST(root->left, val);
        return root;
    }
    TreeNode *newNode(int item)
    {
        TreeNode *n = new TreeNode;
        n->val = item;
        n->left = n->right = NULL;
        return n;
    }
};
