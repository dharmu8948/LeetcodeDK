class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> maxHeap;
        for(int i=0;i<piles.size();i++) {
            maxHeap.push(piles[i]);
        }

        while(k--) {
            int topEle = maxHeap.top();
            maxHeap.pop();
            maxHeap.push(topEle - floor(topEle / 2));
        }
        int sum = 0;
        while(!maxHeap.empty()) {
            sum += maxHeap.top();
            maxHeap.pop();
        }
        return sum;
    }
};