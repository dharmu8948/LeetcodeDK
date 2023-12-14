class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
         priority_queue<int> pq;
        for(auto &i: gifts)pq.push(i);
        while(k--){
            int x = pq.top();pq.pop();//remove max element from array to reduce sum of final array
            pq.push(sqrt(x));//push sqrt of element in array
        }
        long long int ans = 0;
        while(!pq.empty()){
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};