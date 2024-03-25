class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       vector<int> ans;
       map<int, int> mp;
       for(int i=0;i<nums.size();i++) {
        mp[nums[i]]++;
       }  
       for(auto m : mp) {
        if(m.second>1) ans.push_back(m.first);
       }
       return ans;
    }
};