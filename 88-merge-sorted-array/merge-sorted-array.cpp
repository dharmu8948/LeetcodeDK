class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr;
        for(int i=0;i<m;i++) {
            arr.push_back(nums1[i]);
        }
        for(int i=0;i<n;i++) {
            arr.push_back(nums2[i]);
        }
        sort(arr.begin(), arr.end());
        int i=0;
        for(int num : arr) {
            nums1[i++] = num;
        }
    }
};