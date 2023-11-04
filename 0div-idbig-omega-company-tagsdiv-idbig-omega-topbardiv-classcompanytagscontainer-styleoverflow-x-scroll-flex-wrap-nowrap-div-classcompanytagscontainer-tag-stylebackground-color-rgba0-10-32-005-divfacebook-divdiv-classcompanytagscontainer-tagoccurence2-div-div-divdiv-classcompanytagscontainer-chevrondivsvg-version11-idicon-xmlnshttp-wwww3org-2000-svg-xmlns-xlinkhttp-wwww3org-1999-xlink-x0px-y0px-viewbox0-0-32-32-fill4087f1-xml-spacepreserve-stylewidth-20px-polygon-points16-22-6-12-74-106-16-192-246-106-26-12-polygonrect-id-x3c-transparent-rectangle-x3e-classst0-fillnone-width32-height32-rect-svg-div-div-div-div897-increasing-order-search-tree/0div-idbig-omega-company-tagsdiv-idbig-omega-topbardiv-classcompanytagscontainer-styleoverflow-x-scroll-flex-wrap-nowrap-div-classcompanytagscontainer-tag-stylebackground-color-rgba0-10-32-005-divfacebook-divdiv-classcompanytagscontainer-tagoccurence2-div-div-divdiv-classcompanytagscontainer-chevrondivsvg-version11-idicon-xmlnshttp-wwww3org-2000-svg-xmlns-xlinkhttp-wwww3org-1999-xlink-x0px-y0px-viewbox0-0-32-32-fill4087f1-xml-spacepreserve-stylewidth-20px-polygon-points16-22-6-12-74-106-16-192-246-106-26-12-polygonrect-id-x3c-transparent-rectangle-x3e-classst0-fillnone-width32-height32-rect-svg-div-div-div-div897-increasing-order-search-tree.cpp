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
   // for inserting val in array..
   void solve(TreeNode* node,vector<int>&ans){
        if(node==nullptr){
            return;
        }
        solve(node->left,ans);
        solve(node->right,ans);
        ans.push_back(node->val);
    }
    TreeNode* increasingBST(TreeNode* root) {
      // declear a vector to store val..
        vector<int>ans;
        solve(root,ans);
       //sort it..
        sort(ans.begin(),ans.end());
        // create a new tree like link list..
        TreeNode* result= new TreeNode();
       //pointer
        TreeNode* result1= result;
        
        int j=0;
        //inserting val..
        while(j<ans.size()){
        result->right=new TreeNode(ans[j]);
        result= result->right;
        j++;
      }
    // return..
      return result1->right; 
    }
};