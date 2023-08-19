class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      int sum = 0;
      int left_sum = 0;
      // storing sum of all element
      for(int a: nums) {
          sum += a;
      }
      // doing some mathematical manupulation with some condition to find the Pivot
      for(int i=0;i<nums.size();i++) {
          sum -= nums[i];
          if(sum == left_sum)
          return i;
          left_sum += nums[i];
      }
      return -1;
    }
};