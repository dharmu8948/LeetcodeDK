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
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        bool LtoRdir = true;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int width = q.size();
            vector<int> oneLevel(width);
            for(int i=0;i<width;i++) {
                TreeNode* node = q.front(); q.pop();
                int index = LtoRdir ? i : width-i-1;
                oneLevel[index] = node->val;
                if(node->left) {
                    q.push(node->left);
                }
                if(node->right) {
                    q.push(node->right);
                }
            }
            // toggle the flag to move L to R and R to L
            LtoRdir = !LtoRdir;
            ans.push_back(oneLevel);
        }
        return ans;
    }
};