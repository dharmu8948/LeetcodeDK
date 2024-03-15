class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        //Create ans array to store the output values and fill the array with 0.
        vector<int> ans(n, 0);
        int product = 1;
        int zeros = 0;
        //Count the number of zeros in the nums array and store it in zeros variable.Calculate the product of non-zero elements in the nums array and store it in the product variable.
        for (int num : nums) {
            if (num == 0) {
                zeros++;
                continue;
            }
            product *= num;
        }
//if the count of zeros are 1, which means output of each non-zero element of the nums array in the ans array will be equal to 0 (zero). And output of the one and only zero element of the nums array in the ans array will be equal to product.
        if (zeros == 1) {
            for (int i = 0; i < n; i++) {
                ans[i] = nums[i] == 0 ? product : 0;
            }
        } 
       //if the count of zeros are 0, which means all the elements in the nums array are non-zero and output of each element of the nums array in the ans array will be equal to product / nums[i]. 
        else if (zeros == 0) {
            for (int i = 0; i < n; i++) {
                ans[i] = product / nums[i];
            }
        }
//if the count of zeros are 2 or more than 2, which means output of all the elements of the nums array in the ans array will be equal to 0.
        return ans;
    }
};