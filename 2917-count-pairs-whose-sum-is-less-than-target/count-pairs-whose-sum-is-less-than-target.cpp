class Solution {
public:
    int countPairs(vector<int>& nums, int target) {

        int count = 0;
        int i = 0, j = i+1, n = nums.size();
        if(n == 1) return 0;
        if(n == 2) {
            return (nums[0] + nums[1])<target;
        }
        while(i<n) {
            if(j < n) {
                if((nums[i] + nums[j]) < target) {
                    count++;
                }
                j++;
            }else {
                i++; j = i+1;
            }
        }
        return count;
    }
};