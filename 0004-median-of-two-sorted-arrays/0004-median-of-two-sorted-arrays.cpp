class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> ans;
        double res;

        for(int i=0;i<m;i++) {
            ans.push_back(nums1[i]);
        }
        for(int i=0;i<n;i++) {
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(), ans.end());
        if(ans.size()%2 == 0) {
            res = (double)(ans[ans.size()/2 - 1] + ans[ans.size()/2])/2;
           // cout<<ans[ans.size()/2 - 1]<<"  "<<ans[ans.size()/2]<<" "<<res<<endl;
        }else {
            res = ans[ans.size()/2];
        }
        return res;
    }
};