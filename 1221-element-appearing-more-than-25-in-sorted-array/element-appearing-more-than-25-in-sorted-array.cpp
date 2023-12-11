class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int, int> mp;
        for(int i=0;i<arr.size();i++) {
            mp[arr[i]]++;
        }
        int temp = -1, ans;
        for(auto m : mp) {
            if(m.second>temp) {
                temp = m.second;
                ans = m.first;
            }
        }
        return ans;
    }
};