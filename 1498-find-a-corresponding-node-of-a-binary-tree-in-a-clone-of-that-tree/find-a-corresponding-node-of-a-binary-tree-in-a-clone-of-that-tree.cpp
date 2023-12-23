/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* result;
    void dfs(TreeNode* root, int val) {
        if(root) {
            if(root->val == val)
               result = root;
            dfs(root->left, val);
            dfs(root->right, val);
        }
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        dfs(cloned, target->val);
        return result;
    }
};