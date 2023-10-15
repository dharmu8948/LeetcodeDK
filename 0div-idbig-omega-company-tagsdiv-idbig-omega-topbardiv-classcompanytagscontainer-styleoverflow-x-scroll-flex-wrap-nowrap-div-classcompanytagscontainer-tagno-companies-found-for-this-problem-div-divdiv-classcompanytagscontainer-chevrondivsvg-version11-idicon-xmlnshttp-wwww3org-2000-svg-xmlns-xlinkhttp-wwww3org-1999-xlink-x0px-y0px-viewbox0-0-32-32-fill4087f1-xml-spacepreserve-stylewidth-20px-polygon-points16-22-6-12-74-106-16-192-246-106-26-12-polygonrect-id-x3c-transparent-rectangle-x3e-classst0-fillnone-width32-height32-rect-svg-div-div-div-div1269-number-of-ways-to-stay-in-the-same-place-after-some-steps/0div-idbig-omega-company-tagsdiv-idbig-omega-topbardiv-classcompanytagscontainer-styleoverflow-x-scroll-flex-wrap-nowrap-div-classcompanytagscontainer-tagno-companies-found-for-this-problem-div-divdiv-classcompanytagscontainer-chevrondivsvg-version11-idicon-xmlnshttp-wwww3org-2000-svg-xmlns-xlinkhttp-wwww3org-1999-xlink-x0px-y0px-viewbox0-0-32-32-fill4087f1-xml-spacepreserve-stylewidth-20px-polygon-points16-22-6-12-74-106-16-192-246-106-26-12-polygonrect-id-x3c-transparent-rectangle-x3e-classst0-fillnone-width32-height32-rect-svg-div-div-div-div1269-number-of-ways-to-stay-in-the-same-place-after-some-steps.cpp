class Solution {
public:
    #define MOD 1000000007

int dp[501][251]; //Max number of steps is 500; Irrespective of how large "arrLen" is, in the max case, if we reach index 251 or further, we can never return back to index 0 in the remaining steps

int n;

int solve(int remSteps, int index) {

    if(remSteps == 0) {
        if(index == 0) return 1;    //We have no steps remaining and we are at index 0; 1 solution found
        else return 0;              //We have no steps remaining and we are not index 0; not a solution 
    }

    if(remSteps < index) return 0;  //We are too far away to reach index 0 with the nums of steps remaining; not a solution

    if(index == n || index == -1) return 0; //We have stepped out of bounds of the array; not a solution

    if(remSteps == index) return 1; //We are index n and we also have n steps remaining; only 1 possible solution (moving left everytime)

    if(dp[remSteps][index] != -1) return dp[remSteps][index]; //If we have already solved this sub-problem, use the solution

    long long count = 0;
    count += solve(remSteps - 1, index) % MOD;      //No of possible solutions by staying in the same place for the next step
    count += solve(remSteps - 1, index + 1) % MOD;  //No of possible solutions by moving to the right for the next step
    count += solve(remSteps - 1, index - 1) % MOD;  //No of possible solutions by moving to the left for the next step

    dp[remSteps][index] = count % MOD;
    return dp[remSteps][index]; //Memoization: Storing the solution for future use
}

int numWays(int steps, int arrLen){
    n = arrLen;
    for(int i=0;i<steps+1;i++) {
        for(int j=0;j<((steps >> 1) + 1);j++) {
            dp[i][j] = -1;
        }
    }
    return solve(steps, 0);
    }
};