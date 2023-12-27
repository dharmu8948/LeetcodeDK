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
    int findPos(vector<int>& arr, int size, int element) {
        for(int i=0;i<size;i++) {
            if(arr[i] == element) return i;
        }
        return -1;
    }
    TreeNode* buildTreeHelper(vector<int>& preorder, vector<int>& inorder, int size, int &preIndex, int inorderStart, int inorderEnd) {
        // base case
        if(preIndex>=size || inorderStart>inorderEnd) {
            return NULL;
        }
        // solve one case
        //steps: 
        //  i) find the root node that we can get from first ele of preorder array
        // ii) create Node with element
        //iii) find position of element into inroder to assure left and right subtree
        // baki recursion sabhal lega, don't worry just call it 
        int element = preorder[preIndex++];
        TreeNode* root = new TreeNode(element);
        int pos = findPos(inorder, size, element);
        // find left subtree
        root->left = buildTreeHelper(preorder, inorder, size, preIndex, inorderStart, pos-1);
        // find right subtree
        root->right = buildTreeHelper(preorder, inorder, size, preIndex, pos+1, inorderEnd);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int size = preorder.size();
        int preIndex = 0;
          return buildTreeHelper(preorder, inorder, size, preIndex,0,size-1);
    }
};