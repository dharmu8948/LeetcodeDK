class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int ele = 0;
       for(int i : nums) {
        ele ^= i;
       }
       for(int i=0;i<=nums.size();i++) {
        ele ^= i;
       }
       return ele;
    }
};