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
  
    vector<int> inorderTraversal(TreeNode* root) {
      // Using Morris Traversal
      vector<int> ans;
      TreeNode* curr = root;
      while(curr) {
          if(!curr->left) {
              ans.push_back(curr->val);
              curr = curr->right;
          }else if(curr->left){
              // find inorder predecessor
              TreeNode* pred = curr->left;
              while(pred->right != curr && pred->right) {
                  pred= pred->right;
              }
              // if pred right node is null, then establish the link from pred  to curr
              if(pred->right == NULL) {
                  pred->right = curr;
                  curr = curr->left;
              }else {
                  // left is alresdy visited, go right after visiting the curr node, while removing the link
                  pred->right = NULL;
                  ans.push_back(curr->val);
                  curr = curr->right;
              }
          }
      }
      return ans;  
    }
};