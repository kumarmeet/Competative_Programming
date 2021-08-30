void preorder(TreeNode *&r, vector<int> & v)
    {
        if(r)
        {
            preorder(r->left, v);
            v.push_back(r->val);
            preorder(r->right, v);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> v;
        preorder(root, v);
        return v;
    }
