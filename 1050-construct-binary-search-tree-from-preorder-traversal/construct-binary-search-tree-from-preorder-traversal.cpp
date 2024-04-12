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
    TreeNode* buildBST(int &i, int mini, int maxi, vector<int>& preorder) {
        if(i >= preorder.size()) return NULL;
        TreeNode*root = NULL;
        if(preorder[i]>mini && preorder[i]<maxi) {
            root = new TreeNode(preorder[i++]);
            root->left = buildBST(i, mini, root->val, preorder);
            root->right = buildBST(i, root->val, maxi, preorder);
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int maxi = INT_MAX, mini = INT_MIN;
        int i=0;
        return buildBST(i,mini, maxi, preorder);
    }
};