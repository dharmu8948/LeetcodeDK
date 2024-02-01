class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        string h;
         h += x;
        for(int i=0;i<words.size();i++) {
            int flag = 0;
            string s = words[i];
            if(s.find(h) != string::npos) {
                flag = 1;
            }
            if(flag) ans.push_back(i);
        }
        return ans;
    }
};