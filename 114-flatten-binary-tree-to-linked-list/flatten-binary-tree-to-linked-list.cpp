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
    void flatten(TreeNode* root) {
       TreeNode*current = root;
       while(current != NULL) {
           if(current->left != NULL) {
               TreeNode* prev = current->left;
               while(prev->right != NULL) {
                   prev = prev->right;
               }
               prev->right = current->right;
               current->right = current->left;
               current->left = NULL;
           }
           current = current->right;
       } 
    }
};