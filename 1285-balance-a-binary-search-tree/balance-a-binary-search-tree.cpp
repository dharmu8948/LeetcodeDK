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
    TreeNode* balanceBSTHelper(int i, int j, vector<int>&arr) {
        cout<<"calling func"<<endl;
        if(i>j) return NULL;
            int mid = (i+j) >> 1;
            TreeNode* root = new TreeNode(arr[mid]);
            root->left = balanceBSTHelper(i,mid-1,arr);
            root->right = balanceBSTHelper(mid+1,j,arr);
        return root;
    }
    
    void inorder(TreeNode* root) {
        if(!root) return ;
        inorder(root->left);
        arr.push_back(root -> val);
        inorder(root->right);
    }
    TreeNode* balanceBST(TreeNode* root) {
        // phle inorder nikalo jo ki ek sorted array hoga
        inorder(root);
        int i=0, j = arr.size()-1;
        // phir Binary Search ka algo use karke BST Prepare karlo and return kardo root
        return balanceBSTHelper(i,j,arr);
       
    }
};