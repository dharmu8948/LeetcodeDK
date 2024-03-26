class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       int n = nums.size();

       for(int i=0;i<5;i++) {
        for(int j = 0;j<n;j++) {
            int x =nums[j];
            if(x>=1 && x<=n) swap(nums[x-1], nums[j]);
        }
       }
       
       for(int i=0;i<n;i++) {
        if(nums[i] != i+1) return i+1;
       }
       return n+1;
    }
};