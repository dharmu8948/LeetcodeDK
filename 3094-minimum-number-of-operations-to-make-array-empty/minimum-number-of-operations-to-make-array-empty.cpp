class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto a: nums){
            mp[a]++;
        }
        int count = 0;
        for(auto  a : mp) {
            int temp = a.second;
            if(temp==1) return -1;
            count += temp/3;
            if(temp%3) count++;
        }
        return count;
    }
};