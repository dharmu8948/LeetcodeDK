class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int count = 0, n = nums.size();
        
        sort(nums.begin(), nums.end());
        for(int i=1;i<n;i++) {
            if(nums[i] <= nums[i-1]) {
                int diff = nums[i-1] + 1 - nums[i];
                count += diff;
                nums[i] += diff;
            }
        }
        return count;
    }
};