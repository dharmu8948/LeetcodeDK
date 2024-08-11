class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int x = 0;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-1;i++) {
            //cout<<( nums[i]^nums[i+1]) <<"   "<<i<<endl;
            if((nums[i]^nums[i+1] )== 0) return nums[i+1];
        }
        return -1;
    }
};