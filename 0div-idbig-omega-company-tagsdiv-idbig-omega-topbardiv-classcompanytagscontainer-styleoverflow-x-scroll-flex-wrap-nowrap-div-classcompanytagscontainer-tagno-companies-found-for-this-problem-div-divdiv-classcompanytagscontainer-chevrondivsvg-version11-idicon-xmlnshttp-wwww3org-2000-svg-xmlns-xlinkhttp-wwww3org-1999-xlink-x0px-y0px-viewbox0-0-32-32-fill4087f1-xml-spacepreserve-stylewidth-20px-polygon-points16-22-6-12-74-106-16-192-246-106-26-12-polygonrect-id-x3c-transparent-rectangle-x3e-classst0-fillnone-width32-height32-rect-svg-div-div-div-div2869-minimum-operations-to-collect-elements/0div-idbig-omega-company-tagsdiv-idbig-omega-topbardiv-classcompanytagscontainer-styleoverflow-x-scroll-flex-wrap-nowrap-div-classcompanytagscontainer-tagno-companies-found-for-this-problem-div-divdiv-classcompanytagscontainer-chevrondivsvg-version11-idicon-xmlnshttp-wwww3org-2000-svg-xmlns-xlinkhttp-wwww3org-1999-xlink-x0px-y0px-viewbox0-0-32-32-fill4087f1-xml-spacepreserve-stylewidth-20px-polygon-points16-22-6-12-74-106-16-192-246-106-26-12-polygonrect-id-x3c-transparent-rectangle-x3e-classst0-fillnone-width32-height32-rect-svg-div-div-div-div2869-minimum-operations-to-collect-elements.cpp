class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int size=nums.size(),op=0;
        set<int>s;
        for(int i=size-1;i>=0;--i)
        {
            op++;
            if(nums[i]<=k && s.count(nums[i])==0)
            {
            s.insert(nums[i]);
            if(s.size()==k) break;
            }
        }
        return op;
    }
};