class Solution {
public:
    void permute_Helper(vector<int>& nums, int index, vector<vector<int>>&ans) {
        if(index>=nums.size()) {
            ans.push_back(nums);
            return ;
        }
        for(int i=index;i<nums.size();i++) {
            swap(nums[index], nums[i]);
            permute_Helper(nums, index+1, ans);
            swap(nums[index], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        permute_Helper(nums, index, ans);
        return ans;
        
    }
};