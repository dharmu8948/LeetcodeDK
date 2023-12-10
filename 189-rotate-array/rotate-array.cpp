class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k>nums.size())
            k=k%nums.size();
        vector<int> res;
        for(int i=0;i<k;i++) {
            res.push_back(nums[nums.size()-k+i]);
        }
        for(int i=0;i<nums.size()-k;i++) {
            res.push_back(nums[i]);
        }
        nums.assign(res.begin(), res.end());
    }
};