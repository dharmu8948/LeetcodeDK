class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 1);
        int leftProd = 1;
        for(int i=0;i<n;i++) {
            res[i] *= leftProd;
            leftProd *= nums[i];
        }
         int rightProd = 1;
        for(int i=n-1;i>=0;i--) {
            res[i] *= rightProd;
            rightProd *= nums[i];
        }
        return res;
    }
};