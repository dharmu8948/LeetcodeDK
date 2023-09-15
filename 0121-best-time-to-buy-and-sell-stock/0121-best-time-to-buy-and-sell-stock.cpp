class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mini = INT_MAX;
        int maxi = 0;
        int maxDiff = 0;
        
        for(int i = 0; i < prices.size(); i++){
           // buying the stock at least price, so evailauting the min val
            if(prices[i] < mini){
                mini = prices[i];
            }
            // getting the differences between current price and least stock price
            maxDiff = prices[i] - mini;
            // if maxDiff is greater than maxi, it means we can maximize the profit here
            if(maxi < maxDiff){
                maxi = maxDiff;
            }
        }
        // return maximize profit 
        return maxi;
    }
};