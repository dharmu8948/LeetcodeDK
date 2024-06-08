class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        vector<int> ans;
        int index = 0;
        for(int i=0;i<s.size();i++) {
            if(s[i] == 'I') ans.push_back(index++);
            else if(s[i] == 'D') ans.push_back(n--);
        }
        ans.push_back(index);
        return ans;
    }
};