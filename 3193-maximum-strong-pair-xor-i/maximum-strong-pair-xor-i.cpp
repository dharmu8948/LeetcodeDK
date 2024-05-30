class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++) {
            for(int j = i;j<nums.size();j++) {
                int mini = min(nums[i], nums[j]);
                if(abs(nums[i]-nums[j]) <= mini){
                    int num = nums[i]^nums[j];
                    ans = max(num, ans);
                }
            }
        }
        return ans;
    }
};