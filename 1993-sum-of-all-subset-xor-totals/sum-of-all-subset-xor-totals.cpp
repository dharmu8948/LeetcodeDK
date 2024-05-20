class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int ors= 0;
        for(int i=0;i<nums.size();++i){
            ors = ors | nums[i];
        }
        return pow(2,nums.size()-1)*(ors);
    }
};