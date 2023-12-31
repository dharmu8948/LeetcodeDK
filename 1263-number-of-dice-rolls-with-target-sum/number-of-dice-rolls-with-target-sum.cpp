#define m 1000000007
class Solution {
public:
    int numRollsToTargetMemo(int n, int k, int target, vector<vector<int>>& dp) {
        if(n < 0)
            return 0;
        if(n == 0 and target == 0)
            return 1;
        if(n != 0 and target == 0)
            return 0;
        if(n == 0 and target != 0)
            return 0;
        if(dp[n][target] != -1)
            return dp[n][target];
        
        int ans = 0;
        for(int i = 1; i <= k; i++)
        {
            if(target - i >= 0)
                ans = (ans % m) + (numRollsToTargetMemo(n-1, k, target-i, dp) % m);
        }

        dp[n][target] = (ans % m);
        return dp[n][target];
    }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(n+1,vector<int>(target+1,-1));
         return numRollsToTargetMemo(n,k,target,dp);
    }
};