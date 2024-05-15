class Solution {
public:
    void rev(vector<int>&arr, int left, int right) {
        if(arr.size()==0 || arr.size()==1) return ;
        while(left<right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;right--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        if(k>nums.size())
            k=k%nums.size();
        int n = nums.size()-k;
       rev(nums, 0, n-1);
       rev(nums, n, nums.size()-1);
       rev(nums, 0, nums.size()-1);
    }
};