class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // first approach
        /*
        int sum = 0;
        int n = nums.size();
        for(int i=0;i<nums.size();i++) {
            sum += nums[i];
        }
        int diff = (n*(n+1)/2) - sum;
        return diff;

    */
    // second approach using xor
   // Dekho pehle array ke elements ka xor kr liye fir 0 se n tak xor kr liye..jo number missing hoga khud hi aa jayega.
   int ele = 0;
   for(int l: nums) {
       ele^=l;
   }
   for(int i=0;i<=nums.size();i++) {
       ele^=i;
   }
   return ele;
    }
};