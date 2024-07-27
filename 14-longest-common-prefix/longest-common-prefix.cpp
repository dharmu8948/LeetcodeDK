class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int mini = INT_MAX;
        int n = strs.size();
        string ans = strs[0];
        for(int i=0;i<n;i++) {
            int small = strs[i].size();
            mini = min(mini,small);
        }
        for(int i=0;i<n-1;i++) {
            string str1 = strs[i];
            string str2 = strs[i+1];
            string temp ="";
            for(int j = 0;j<mini;j++) {
                if(str1[j] == str2[j]) {
                    temp += str1[j];
                }
                else break;
            }
            ans = ans.size() > temp.size() ? temp : ans;
        }
        return ans;
    }
};