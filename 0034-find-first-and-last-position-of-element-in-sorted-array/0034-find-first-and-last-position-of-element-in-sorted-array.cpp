class Solution {
public:
    int firstOccur(vector<int>& nums, int target) {
        int start = 0,end = nums.size()-1;
        int res = -1;
        while(start<=end) {
            int mid = start + (end-start)/2;
            if(nums[mid] == target) {
                res = mid;
                end = mid-1;
            }else if(nums[mid]>target) {
                end = mid - 1;
            }else {
                start = mid + 1;
            }
        }
        return res;
    }
    int lastOccur(vector<int>& nums, int target) {
        int start = 0,end = nums.size()-1;
        int res = -1;
        while(start<=end) {
            int mid = start + (end-start)/2;
            if(nums[mid] == target) {
                res = mid;
                start = mid+1;
            }else if(nums[mid]>target) {
                end = mid - 1;
            }else {
                start = mid + 1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int ans1 = firstOccur(nums, target);
        int ans2 = lastOccur(nums, target);
        res.push_back(ans1);
        res.push_back(ans2);
        return res;
    }
};