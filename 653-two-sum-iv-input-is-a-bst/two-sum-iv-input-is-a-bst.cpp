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
    void inorder(TreeNode* root,vector<int>&arr) {
        if(!root) return;
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right,arr);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> arr;
        if(root == NULL) return true;
        // sort the array using inorder(Since in BST inorder triversal will make the elements in sorted manner and stored the elements inot arr)
        inorder(root, arr);
        //apply two pointer algo to get the target
        int i = 0, j = arr.size()-1;
        while(i<j) {
            int sum = arr[i] + arr[j];
            if(sum == k) return true;
            else if(sum>k) {
                j--;
            }else {
                i++;
            }
        }
        return false;
    }
};