class Solution {
public:
    bool isWordContain(string str, char ch) {
        for(int i=0;i<str.size();i++) {
            if(str[i] == ch) return true;
        }
        return false;
    }
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i=0;i<words.size();i++) {
            if(isWordContain(words[i], x)) 
               ans.push_back(i);
        }
        return ans;
    }
};