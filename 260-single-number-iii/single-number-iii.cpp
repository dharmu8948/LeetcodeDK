class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        map<int, int> mp;
        for(int num: nums) {
            mp[num]++;
        }
        for(auto m : mp) {
            if(m.second == 1) ans.push_back(m.first);
        }
        return ans;
    }
};