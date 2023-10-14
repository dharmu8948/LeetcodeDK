class Solution {
public:
     int solve(int i,int wallRemainToPaint,vector<int>& cost, vector<int>& time,vector<vector<int>>&dp){
        if(i==0){
            if(wallRemainToPaint<=0)return 0;
            else return 1e9;
        }
        if(wallRemainToPaint<=0)return 0;

        if(dp[i][wallRemainToPaint]!=-1)return dp[i][wallRemainToPaint];

        int paint=cost[i-1]+solve(i-1,wallRemainToPaint-time[i-1]-1,cost,time,dp);
        int notPaint=0+solve(i-1,wallRemainToPaint,cost,time,dp);
        return dp[i][wallRemainToPaint]=min(paint,notPaint);
    }
    int paintWalls(vector<int>& cost, vector<int>& time) {
        int n=cost.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solve(n,n,cost,time,dp);
    }
};