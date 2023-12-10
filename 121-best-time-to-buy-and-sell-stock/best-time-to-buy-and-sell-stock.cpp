class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minPrice = INT_MAX;
       int maxProfit = INT_MIN;
       int n = prices.size();
       for(int i=0;i<n;i++) {
           if(prices[i]<minPrice) minPrice = prices[i];
           int todayProfit = prices[i] - minPrice;
           if(todayProfit>maxProfit) {
               maxProfit = todayProfit;
           }
       } 
       return maxProfit;
    }
};