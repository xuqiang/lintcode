// /binary-tree-preorder-traversal/

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
     * @return: Preorder in vector which contains node values.
     */
    vector<int> preorderTraversal(TreeNode *root) {
        // write your code here
        vector<int> res;
        
        travel(root, res);
        
        return res;
    }
    void travel(TreeNode* root, vector<int>& res) {
        if(root == NULL) return;
        res.push_back(root->val);
        if(root->left) travel(root->left);
        if(root->right) travel(root->right);
    }
};
