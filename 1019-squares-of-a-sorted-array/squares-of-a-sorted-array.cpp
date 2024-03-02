class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
           nums[i] = nums[i] * nums[i];
        }        
           
        int l = 0;
        int n = nums.size();
        int r = n - 1;
        vector<int> resVector(n,0);

        //Two pointer technique
        for(int i = n - 1; i >= 0; i--){
            if(nums[l] > nums[r]){
                resVector[i] = nums[l];
                l++;
            }else{
                resVector[i] = nums[r];
                r--;
            }
        }

        return resVector;  
    }
};