class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minH;
        for(int i=0;i<k;i++) {
            minH.push(nums[i]);
        }
        for(int i=k;i<nums.size();i++) {
            if(minH.top() < nums[i]) {
                minH.pop();
                minH.push(nums[i]);
            }
        }
        return minH.top();
    }
};