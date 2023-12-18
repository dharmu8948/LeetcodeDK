class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int max1=0, max2=0, min1=10000, min2=10000;
        for( auto &it:nums){
            if(it>max1){
                max2=max1;
                max1=it;
            }
            else{
                max2=max(max2,it);
            }
            if(it<min1){
                min2=min1;
                min1=it;
            }
            else{
                min2=min(min2,it);
            }
        }
        return((max1*max2)-(min1*min2));
    }
};