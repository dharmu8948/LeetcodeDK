class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        // Approach 1
 /*       int count = 0, maxi = -1;
        for(int i=0;i<prices.size()-1;i++) {
            for(int j = i+1;j<prices.size();j++) {
                if(prices[i]+prices[j] <= money) {
                    maxi =  max(maxi, money - (prices[i]+prices[j]));
                }
                   
            }
        }
        return maxi != -1 ? maxi:money; */
        //Approach 2
        sort(prices.begin(), prices.end());
        return (money>=(prices[0]+prices[1]))? money-(prices[0]+prices[1]): money; 
    }
};