class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        // Optimal Solution 
         sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        int n = arr.size();
        for(int i = 0 ; i < n ; i++ ) {
            // if we have first pair or the pair which might be in pair(like: (1,6),(8,10)) 
            if(ans.empty() || arr[i][0] > ans.back()[1]) {
                ans.push_back(arr[i]);
            }else {
                ans.back()[1] = max(arr[i][1], ans.back()[1]);
            }
        }

        /*
        // Brute force Approach
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        int n = arr.size();
        for(int i=0;i<n;i++) {
            int start = arr[i][0];
            int end = arr[i][1];
            if(!ans.empty() && end <= ans.back()[1]) {
                continue;
            }
            for(int j = i+1;j<n;j++) {
                if(arr[j][0] <= end) end = max(end, arr[j][1]);
                else break;
            }
            ans.push_back({start, end});
        }
        */
        return ans;
    }
};