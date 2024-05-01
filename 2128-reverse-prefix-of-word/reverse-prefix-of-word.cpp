class Solution {
public:
    string reversePrefix(string word, char ch) {
        string str;
        int i=0;
        for(;i<word.size();i++) {
            if(word[i] == ch) {
                str += ch;
                break;
            }else {
                str += word[i];
            }
        }
        if(i<word.size()) {
            reverse(str.begin(), str.end());
            str += word.substr(i+1, word.size());
            return str;
        }
        return str;
    }
};