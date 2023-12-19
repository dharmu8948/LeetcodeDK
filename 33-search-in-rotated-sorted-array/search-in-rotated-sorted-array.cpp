class Solution {
public:
   int binarySearch(vector<int>& nums, int target, int start, int end) {
       while(start<=end) {
           int mid = start + (end - start)/2;
           if(nums[mid] == target)
              return mid;
           else if(nums[mid]> target)
                  end = mid - 1;
            else
              start = mid +1;
       }
       return -1;
   }
   int findPivot(vector<int>& nums) {
       int start = 0, end = nums.size()-1;
       while(start<end) {
           int mid = start + (end - start)/2;
           if(mid+1<nums.size() && nums[mid]> nums[mid+1]){
               return mid;
           }
           if(mid-1>=0 && nums[mid]<nums[mid-1]) {
               return mid-1;
           }
           if(nums[start]<nums[mid]){
               start = mid ;
           }else {
               end = mid -1;
           }
       }
       return start;
   }
    int search(vector<int>& nums, int target) {
        // first finding the Pivot Index
       int pivotIndex = findPivot(nums);

       if(target>=nums[0] && target<=nums[pivotIndex]) {
           // if target lies in nums of [0 to pivotIndex]
           int res = binarySearch(nums,target, 0, pivotIndex);
           return res;
       }
        if(pivotIndex+1<nums.size() && target>=nums[pivotIndex+1] && target<=nums[nums.size()-1]) {
           // if target lies in nums of [pivotIndex to nums.size()-1]
           int res = binarySearch(nums,target, pivotIndex+1, nums.size()-1);
           return res;
       }
       return -1; 
    }
};