class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> temp(nums.size(),-1);
        for(int i=0;i<nums.size();i++) {
            if(temp[nums[i]] != -1) {
                return nums[i];
            }else {
                temp[nums[i]] = 1;
            }
        }
        return -1;
    }
};