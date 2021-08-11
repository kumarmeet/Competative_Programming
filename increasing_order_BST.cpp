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
class Solution
{
public:
    vector<int> v;
    TreeNode *newNode(int item)
    {
        TreeNode *temp = (TreeNode *)malloc(sizeof(TreeNode));
        temp->val = item;
        temp->left = temp->right = NULL;
        return temp;
    }

    TreeNode *increasingBST(TreeNode *root)
    {
        vector<int> v1 = inorderTraversal(root);

        TreeNode *n = newNode(v.at(0));
        root = n;
        int x = 0;

        for (int i = 1; i < v1.size(); i++)
        {

            n->right = newNode(v1.at(i));
            n->left = nullptr;
            n = n->right;
        }
        n->left = n->right = nullptr;
        v.clear();
        return root;
    }

    vector<int> inorderTraversal(TreeNode *node)
    {
        if (node)
        {
            inorderTraversal(node->left);
            v.push_back(node->val);
            inorderTraversal(node->right);
        }

        return v;
    }
};
