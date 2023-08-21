class Solution {
public:
   int bs(vector<int>& nums, int start, int x) {
       int end = nums.size()-1;
       while(start<=end) {
           int mid  = start+(end - start)/2;
           if(nums[mid] == x) {
               return mid;
           }else if(nums[mid]<x) {
               start = mid + 1;
           }else {
               end = mid -1;
           }
       }
       return -1;
   }
    int findPairs(vector<int>& nums, int k) {
       
        sort(nums.begin(), nums.end());
        set<pair<int, int>> st;
         for(int i=0;i<nums.size()-1;i++) {
             if(bs(nums, i+1,nums[i]+k)!= -1) {
                 st.insert({nums[i],nums[i]+k});
             }
         }
        return st.size();
    }
};