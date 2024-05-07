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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root == NULL) return {};
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        q.push(root);

        while(!q.empty()) {
            int levelSize = q.size();
            vector<int> curr;
            for(int i=0;i<levelSize;i++) {
                auto top = q.front(); q.pop();
                if(top->left) q.push(top->left);
                if(top->right) q.push(top->right);
                curr.push_back(top->val);
            }
           // reverse(curr.begin(), curr.end());
            ans.push_back(curr);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};