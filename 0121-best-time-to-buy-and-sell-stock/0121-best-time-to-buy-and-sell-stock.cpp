class Solution {
public:
    void maximizeProfitRE(vector<int>& prices, int i, int &minPrice, int &maxProfit) {
        // base case
        if(i==prices.size()){
            return ;
        }
        // ek case solve kar lo
        if(prices[i]<minPrice) minPrice = prices[i];
        int todayProfit = prices[i] - minPrice;
        if(todayProfit > maxProfit) maxProfit = todayProfit;

        // baki recursion sambhal lega
        maximizeProfitRE(prices, i+1, minPrice, maxProfit);
    }
    int maxProfit(vector<int>& prices) {
       int minPrice = INT_MAX;
       int maxProfit = INT_MIN;
       maximizeProfitRE(prices,0,minPrice, maxProfit);
       return maxProfit;
    }
};