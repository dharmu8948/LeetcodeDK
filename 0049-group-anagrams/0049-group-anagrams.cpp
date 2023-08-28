class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // created a map to store sorted string vs all related string 
       map<string, vector<string>> mp;
       vector<vector<string>> ans;
       // first sorting the current string and storing the current string
       //Example: ["eat","tea","tan","ate","nat","bat"]
       /*
       step: 1:
       */
       for(int i=0;i<strs.size();i++) {
           string s = strs[i];
           sort(s.begin(), s.end());
           mp[s].push_back(strs[i]);
       }
       for(auto it=mp.begin();it!=mp.end();it++) {
           ans.push_back(it->second);
       }
       return ans;
    }
};