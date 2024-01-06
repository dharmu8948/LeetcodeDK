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
  
   // Part of Approach 1
   /*
    int height(TreeNode* root) {
        if(root == NULL) return 0;
        return 1+ max(height(root->left), height(root->right));
    }
     --end */
    int Diameter = 0;
    int height(TreeNode* root) {
        if(root == NULL) return 0;
        int lh = height(root->left);
        int rh = height(root->right);
        int currD = lh + rh;
        Diameter = max(Diameter, currD);
        return max(lh, rh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {

        // Approach 1
        /*
        if(root == NULL) return 0;
        int lefty = diameterOfBinaryTree(root->left);
        int righty = diameterOfBinaryTree(root->right);
        int withRoot = height(root->left) + height(root->right);
        return max(lefty, max(righty, withRoot));
        */
        // Approach 2 Faster compare to first
        height(root);
        return Diameter;

    }
};