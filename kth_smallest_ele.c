/**
 * Definition for a binary tree node.*/
 struct TreeNode {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
 };

int AddToArray(struct TreeNode *r, int arr[], int i);
int count(struct TreeNode *tree);

int kthSmallest(struct TreeNode* root, int k){
    int n = count(root);
    int arr[n];
    int j = 0;
    int i, temp;

    AddToArray(root, arr, 0);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(i = 1; i <= n; i++)
        if(i == k)
           return arr[i - 1];
    
    return -1;
}

int AddToArray(struct TreeNode *r, int arr[], int i) // convert bst to array
{
    if(r == NULL)
        return i;

    arr[i] = r->val;
    i++;
    if(r->left != NULL)
        i = AddToArray(r->left, arr, i);
    if(r->right != NULL)
        i = AddToArray(r->right, arr, i);

    return i;
}

int count(struct TreeNode *tree) // count nodes
{
    int c = 1;             //Node itself should be counted
    if (!tree)
        return 0;
    else
    {
        c += count(tree->left);
        c += count(tree->right);
        return c;
    }
}
