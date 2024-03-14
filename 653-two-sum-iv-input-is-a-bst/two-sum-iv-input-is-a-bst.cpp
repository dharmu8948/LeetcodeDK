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
    vector<int> arr;
    void inorder(TreeNode* root) {
        if(root!= NULL) {
            inorder(root->left);
            arr.push_back(root->val);
            inorder(root->right);
        }
    }
    bool findTarget(TreeNode* root, int k) {
        inorder(root);

        int n = arr.size();
        int i=0, j=n-1;
        while(i<j) {
            int sum = arr[i] + arr[j];
            if(sum == k) return true;
            else if(sum < k) i++;
            else if(sum > k) j--;
        }
        return false;
    }
};