class Solution {
public:
    int getMinValue(vector<int>& nums2, int key) {
        int s = 0;
        int e = nums2.size()-1;
        while(s<=e) {
            int mid = s+(e-s)/2;
            if(nums2[mid] == key)
              return key;
            else if(nums2[mid]>key) {
                e = mid-1;
            }else if(nums2[mid]<key) {
                s = mid+1;
            }
        }
        return -1;
    }
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
       for(int i=0;i<nums1.size();i++) {
           int ans = getMinValue(nums2,nums1[i]);
           if(ans != -1) {
               return ans;
           }
        }
        return -1;
    }
};