class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        // Sliding Window Approach
        int left = 0, right = 0, product = 1, count = 0;
        int n = nums.size();
        if(k <= 1) return 0;
        while (right < n) {
        product *= nums[right];
        while (product >= k) product /= nums[left++];
        count += 1 + (right - left);
        right++;
        }
        return count;
        // brute force approach
        /* 
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
        */
    }
};