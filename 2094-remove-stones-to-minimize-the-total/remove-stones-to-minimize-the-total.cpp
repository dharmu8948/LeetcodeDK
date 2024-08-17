class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
       priority_queue<int> maxH;
       // adding values into max heap
       for(int i=0;i<piles.size();i++) {
        maxH.push(piles[i]);
       }
       // performing k operation to minimize the sum
       while(k--) {
        int num = maxH.top();
        maxH.pop();
        maxH.push(num - floor(num/2));
       }
        int sum = 0;
       // evaluating total sum now
       while(!maxH.empty()) {
        sum += maxH.top(); maxH.pop();
       }

       // returning minimized sum
       return sum;
    }
};

