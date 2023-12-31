class Solution {
public:
    int maximumProduct(vector<int>& nums) {
       // sort(nums.begin(), nums.end());
        int n = nums.size();
        int prod1, prod2;
        sort(nums.begin(), nums.end());
        prod1 = nums[n-1]*nums[n-2]*nums[n-3];
        prod2 = nums[n-1]*nums[0]*nums[1];
        return max(prod1, prod2);
    }
};