class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        set<int> myset(nums1.begin(), nums1.end());
        set<int> myset2(nums2.begin(), nums2.end());
        map<int, int> mp;
        for(int num : myset) {
            mp[num]++;
        }
        for(int num : myset2) {
           // cout<<mp[num]<<"   wdjsh  "<<num;
            mp[num]++;
            if(mp[num]>1) ans.push_back(num);
        }
       // cout<<endl;
        return ans;
    }
};