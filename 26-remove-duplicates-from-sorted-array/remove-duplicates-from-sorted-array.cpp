class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0 || nums.size() == 1) return nums.size();
        int i=0;
        int j=i+1;
        int ans;
        while(j<nums.size() && i<j) {
            if(nums[i] == nums[j]){
                j++;
            } else {
                swap(nums[i+1], nums[j]);
                i++;
                j++;
            }
        }
        return i+1;
    }
};