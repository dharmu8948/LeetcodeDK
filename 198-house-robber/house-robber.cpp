class Solution {
public:
    int robHelper(vector<int>& nums, int i) {
        // base case
        if(i>=nums.size()) {
            return 0;
        }
        //we are extracting the max profit between phle ghar ko lootenge and phle ghar ko nahi lutenge
        // phle ghar ko lutenge aur i = i+2 krenge qki adjacent gahr nahi loot skte
        int robAmt1 = nums[i] + robHelper(nums, i+2);
        // phle ghar ko nahi lutenge to i = i+1 krenge qki maine phla ghta nahi loota hai
        int robAmt2 = 0 +  robHelper(nums, i+1);

        return max(robAmt1,robAmt2);
    }
    int rob(vector<int>& nums) {
        // Recursive Solution 
       // return robHelper(nums, 0);

        // DP Solution 
        int n = nums.size();
         if( n==1 ){
            return nums[0];
        }else if(n == 0){
            return 0;
        }else if(n == 2){
            return max(nums[0],nums[1]);
        }
        
        int dp[n];
        dp[0] = nums[0];
        dp[1] = nums[1];
        dp[2] = nums[2] + nums[0];
        for(int i=3;i<n;i++){
            dp[i] = max(dp[i-2],dp[i-3]) + nums[i];
        }
        
        return max(dp[n-1],dp[n-2]);
    }
};