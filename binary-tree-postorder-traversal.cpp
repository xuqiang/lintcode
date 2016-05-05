//binary-tree-postorder-traversal

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
    /**
     * @param root: The root of binary tree.
     * @return: Postorder in vector which contains node values.
     */
public:
    vector<int> postorderTraversal(TreeNode *root) {
        // write your code here
        vector<int> res;
        
        travel(root, res);
        
        return res;
    }
    
    void travel(TreeNode* root, vector<int>& res) {
        if(root == NULL) return;
        if(root->left) travel(root->left, res);
        if(root->right) travel(root->right, res);
        res.push_back(root->val);
    }
};