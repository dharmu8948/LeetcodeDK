class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int , int> mp;
        vector<int> ans;
        for(int i=0;i<arr.size();i++) {
            mp[arr[i]]++;
        }
        int l=0;
       for(auto m : mp) {
          ans.push_back(m.second); 
       }
       sort(ans.begin(), ans.end());
       for(int i=0;i<ans.size()-1;i++) {
           if(ans[i] == ans[i+1])
           return false;
       }
        return true;
    }
};