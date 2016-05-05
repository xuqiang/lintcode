// maximum-depth-of-binary-tree

/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param root: The root of binary tree.
     * @return: An integer
     */
    int maxDepth(TreeNode *root) {
        // write your code here
        if(root == NULL) return 0;
        int left = 0;
        int right = 0;
        if(root->left) left = maxDepth(root->left);
        if(root->right) right = maxDepth(root->right);
        return max( left, right ) + 1;

    }
};