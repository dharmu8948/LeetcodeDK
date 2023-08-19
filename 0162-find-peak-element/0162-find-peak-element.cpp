class Solution {
public:
    int findPeakElement(vector<int>& nums) {
      int s = 0;
        int e = nums.size()-1;
        // handling the case when array has just one element
        if(s == e) return s;
        // handling the case when peek element as first element : [6,5,4,3,2,3,2]
        if(nums[s]>nums[s+1]) return s;
        // handling the case when peek element as last element : [1,2,3]
        if(nums[e]>nums[e-1]) return e;
        s++,e--;
        while(s<=e) {
            int mid = s + (e - s)/2;
            // if num[mid] is greater element of it's left and right element
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) {
                return mid;
            } 
            //if nums[mid] less than it's left element then move end to mid -1
            else if(nums[mid-1]>nums[mid]) {
                e = mid - 1;
            }
            //if nums[mid] less than it's right element then move end to mid +1
            else if(nums[mid+1]>nums[mid]) {
                s = mid + 1;
            }
        }
        return -1;
    }
};