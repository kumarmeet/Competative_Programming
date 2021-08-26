#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
};

TreeNode *createNode(int key)
{
  TreeNode *n = new TreeNode();
  n->val = key;
  n->left = n->right = nullptr;
  return n;
}

TreeNode *sortBST(vector<int> &nums, int l, int r)
{
  if (l <= r)
  {
    int mid = ((l + r) / 2);
    //preorder traversal technique (root left right)
    TreeNode *newnode = createNode(nums[mid]);
    newnode->left = sortBST(nums, l, mid - 1);
    newnode->right = sortBST(nums, mid + 1, r);
    return newnode;
  }
  return nullptr;
}

TreeNode *sortedArrayToBST(vector<int> &nums)
{
  size_t size = nums.size();

  if (size == 1)
    return createNode(nums[0]);

  return sortBST(nums, 0, size - 1);
}

int main()
{
  vector<int> nums{-10, -3, 0, 5, 9};
  TreeNode *t = sortedArrayToBST(nums);
  return 0;
}
