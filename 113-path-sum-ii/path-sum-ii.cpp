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
    void pathSumHelper(TreeNode* root, int &targetSum, vector<vector<int>> &ans,vector<int>&path, int &currSum) {
        // base case
        if(!root) return ;
        // check for leaf node
        if(!root->left && !root->right) {
            // include curr
            path.push_back(root->val);
            currSum += root->val;
            // if currSum == targetSum then store it into ans var
            if(currSum == targetSum){
                ans.push_back(path);
            }
            // exclude curr
             path.pop_back();
            currSum -= root->val;
        }
        // process the othan than leaf node
        // include curr node
        path.push_back(root->val);
        currSum += root->val;
        pathSumHelper(root->left, targetSum, ans, path, currSum);
        pathSumHelper(root->right, targetSum, ans, path, currSum);
        // exclude curr node
        path.pop_back();
        currSum -= root->val;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
        int sum = 0;
        pathSumHelper(root, targetSum, ans, temp, sum);
        return ans;
    }
};