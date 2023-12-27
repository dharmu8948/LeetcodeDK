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
    TreeNode* buildTreeHelper(vector<int>& postorder, vector<int>& inorder, int size, int &postIndex, int inorderStart, int inorderEnd) {
        // base case
        if(postIndex<0 || inorderStart>inorderEnd) {
            return NULL;
        }
        // solve one case
        //steps: 
        //  i) find the root node that we can get from first ele from preIndex  of postorder array
        // ii) create Node with element
        //iii) find position of element into inroder to assure left and right subtree
        // baki recursion sabhal lega, don't worry just call it 
        cout<<postIndex<<"  ";
        int element = postorder[postIndex--];
        TreeNode* root = new TreeNode(element);
        int pos = findPos(inorder, size, element);

         // find right subtree
        root->right = buildTreeHelper(postorder, inorder, size, postIndex, pos+1, inorderEnd);
        // find left subtree
        root->left = buildTreeHelper(postorder, inorder, size, postIndex, inorderStart, pos-1);
       
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int size = postorder.size();
        int postIndex = size-1;
        return buildTreeHelper(postorder, inorder, size, postIndex,0,size-1);
    }
};