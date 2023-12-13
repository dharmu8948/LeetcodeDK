class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        // first window of K size
        for(int i=0;i<k;i++) {
            // chhote element remove kardo
            while(!dq.empty() && nums[i] >= nums[dq.back()]) {
                dq.pop_back();
            }
            // inserting index so that we can check out of window size
            dq.push_back(i);
        }
        // store ans for first window
            ans.push_back(nums[dq.front()]);
        // remaing window process
        for(int i = k;i<nums.size();i++) {
            // remove out of window elements
            if(!dq.empty() && i-dq.front() >= k) {
                dq.pop_front();
            }
            // ab firse current element se chhote element to remove karna hai
            while(!dq.empty() && nums[i]>=nums[dq.back()]) {
                dq.pop_back();
            }
            // inserting index so that we can check out of window size
            dq.push_back(i);
            // store ans for current window
            ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};