class Solution {
public:
    int solve(vector<int> nums, int target) {
        int count = 0, sum =0;
        for(int i=0;i<nums.size();i++) {
            sum = sum +nums[i];
            if(sum<=target) {
                count++;
            }
        }
        return count;
    }
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
       vector<int> ans;
       sort(nums.begin(), nums.end());
       for(int i=0;i<queries.size();i++) {
           int res = solve(nums, queries[i]);
           ans.push_back(res);
       }
       return ans;
    }
};