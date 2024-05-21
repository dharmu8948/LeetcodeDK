class Solution {
public:
    void solve(vector<int>& nums, vector<int> temp, vector<vector<int>>&ans, int index) {
        if(nums.size()<=index) {
            ans.push_back(temp);
            return ;
        }
        // exclude
       solve(nums, temp, ans,index+1);

       // include
       temp.push_back(nums[index]);
       solve(nums, temp, ans,index+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        int index = 0;
        solve(nums, temp, ans, index);
        return ans;
    }
};