class Solution {
public:
    int dos(vector<int>&days,int a,int b,int c,int idx,vector<int>&dp){
    
    if(idx>=days.size()){
        return 0;
    }
    if(dp[idx]!=-1){
        return dp[idx];
    }
    int pass_1=a+dos(days,a,b,c,idx+1,dp);
     int pass_7=b+dos(days,a,b,c,lower_bound(days.begin()+idx,days.end(),days[idx]+7)-days.begin(),dp);
     int pass_30=c+dos(days,a,b,c,lower_bound(days.begin()+idx,days.end(),days[idx]+30)-days.begin(),dp);
    
    return dp[idx]=min(pass_1,min(pass_30,pass_7));
}

int mincostTickets(vector<int>& days, vector<int>& cost) {
    vector<int> dp(days.size(),-1);
    return dos(days,cost[0],cost[1],cost[2],0,dp);
    }
};