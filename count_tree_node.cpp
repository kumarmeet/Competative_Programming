int countNodes(TreeNode* root) {
  int x, y;
  if(root)
  {
    x = countNodes(root->left);
    y = countNodes(root->right);
    return x + y + 1;
  }
  return 0;
 }
