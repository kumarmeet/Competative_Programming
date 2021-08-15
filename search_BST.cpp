TreeNode *searchBST(TreeNode *root, int val)
{
    if (root)
    {
        while (root)
            if (val < root->val)
                root = root->left;
            else if (val > root->val)
                root = root->right;
            else if (val == root->val)
                return root;
    }
    return nullptr;
}
