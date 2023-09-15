class Solution {
public:
    bool solve(vector<int>& v,int n,int sum,vector<vector<int>> &dp){

        // memoize
        if(dp[n][sum] != -1) return dp[n][sum];

        // calculation
        if(v[n - 1] <= sum){
            return dp[n][sum] = solve(v,n - 1,sum - v[n - 1],dp) || solve(v,n - 1,sum,dp);
        }
        else{
            return dp[n][sum] = solve(v,n - 1,sum,dp);
        }
    }

    bool canPartition(vector<int>& v) {
        int n = v.size();
        int sum = 0;


        for(auto x : v) sum += x;
        if(sum & 1) return 0;
        else{
            sum = sum / 2;
            vector<vector<int>> dp(n + 1,vector<int>(sum + 1,-1));

            // base condition
            for(int i = 0;i <= sum;i++)
                dp[0][i] = 0;
        
            for(int i = 0;i <= n;i++)
                dp[i][0] = 1;

            return solve(v,n,sum,dp);
        }
    }
};