class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            if(nums[i]<k) count++;
        }
        for(int i=0;i<n-1;i++) {
            int sum = nums[i];
            for(int j = i+1;j<n;j++) {
                sum *= nums[j];
                if(sum<k) count++;
                else break;
            }
        }
        return count;
    }
};