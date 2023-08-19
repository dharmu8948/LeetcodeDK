class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int s = 0;
        int e = nums.size();
        int mid = s + (e - s)/2;
        // to avoid the infinit loop we can't use s<=e in while condition because we are using as e = mid in else part
        while(s<e) {
            if(nums[mid] < nums[mid+1]) {
                s = mid+1;
            }else {
                e = mid;
            }
            mid = s + (e - s)/2;
        }
        return s;
        
    }
};