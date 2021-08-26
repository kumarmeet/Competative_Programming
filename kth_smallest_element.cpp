struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
};

int kthSmallest(TreeNode *root, int k)
{
  vector<int> nums;
  copyBstToArray(root, nums);
  return nums[k - 1];
}

void copyBstToArray(TreeNode *r, vector<int> &nums)
{
  if (r)
  {
    copyBstToArray(r->left, nums);
    nums.push_back(r->val);
    copyBstToArray(r->right, nums);
  }
}
