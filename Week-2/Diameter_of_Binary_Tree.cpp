/*
Given a binary tree, you need to compute the length of the diameter of the tree. 
The diameter of a binary tree is the length of the longest path between any two nodes in a tree. 
This path may or may not pass through the root.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
  int height(TreeNode *root)
  {
    if (root == NULL)
    {
      return 0;
    }
    return max(height(root->left), height(root->right)) + 1;
  }

  int diameterOfBinaryTree(TreeNode *root)
  {
    if (root == NULL)
    {
      return 0;
    }
    int left_height = height(root->left);
    int right_height = height(root->right);

    int left_dia = diameterOfBinaryTree(root->left);
    int right_dia = diameterOfBinaryTree(root->right);

    return max(left_height + right_height, max(left_dia, right_dia));
  }
};