class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       // brute force approach
       int index = 0;
       for(int i=0 ; i < (m+n) ; i++) {
            if(nums1[i] == 0 && i>=m){
                nums1[i] = nums2[index];
                index++;
            }
        }
       sort(nums1.begin(), nums1.end());
    }
};