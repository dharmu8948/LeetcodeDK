class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<=nums.size();i++){
            int index=lower_bound(nums.begin(),nums.end(),i) - nums.begin();
            int count= (nums.size() - index);
            if(count==i){
                return i;
            }
        }
        return -1;
    }
};