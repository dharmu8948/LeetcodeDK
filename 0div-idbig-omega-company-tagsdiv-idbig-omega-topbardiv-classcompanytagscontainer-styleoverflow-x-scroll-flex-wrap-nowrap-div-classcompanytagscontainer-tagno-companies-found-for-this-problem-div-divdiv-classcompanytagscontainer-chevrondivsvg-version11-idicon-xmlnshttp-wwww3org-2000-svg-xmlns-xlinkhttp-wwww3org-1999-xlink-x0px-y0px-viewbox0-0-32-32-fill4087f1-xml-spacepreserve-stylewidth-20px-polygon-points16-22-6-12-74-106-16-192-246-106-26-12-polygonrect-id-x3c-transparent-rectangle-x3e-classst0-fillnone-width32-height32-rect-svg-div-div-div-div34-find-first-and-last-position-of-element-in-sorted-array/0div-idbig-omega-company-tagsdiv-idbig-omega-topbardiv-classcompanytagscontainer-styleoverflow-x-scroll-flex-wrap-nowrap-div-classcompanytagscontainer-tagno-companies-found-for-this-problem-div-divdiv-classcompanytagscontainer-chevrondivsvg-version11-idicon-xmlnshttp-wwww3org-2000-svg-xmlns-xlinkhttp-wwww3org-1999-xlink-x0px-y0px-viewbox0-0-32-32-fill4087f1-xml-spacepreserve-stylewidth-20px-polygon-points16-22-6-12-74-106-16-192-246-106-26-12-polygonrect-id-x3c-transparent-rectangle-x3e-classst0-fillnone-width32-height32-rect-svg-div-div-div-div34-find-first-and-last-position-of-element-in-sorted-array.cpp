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
        // first approach using our own function

       // int ans1 = firstOccur(nums, target);
        //int ans2 = lastOccur(nums, target);

        // approach 2 : using STL inbuilt function
        int startingPosition = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int endingPosition = lower_bound(nums.begin(), nums.end(), target+1) - nums.begin() - 1;
        if(startingPosition < nums.size() && nums[startingPosition] == target){
            return {startingPosition, endingPosition};
        }
        return {-1, -1};
    }
};