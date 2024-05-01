class Solution {
public:
    string reversePrefix(string word, char ch) {
        string str;
        for(int i=0;i<word.size();i++) {
            if(word[i] == ch) {
                str += ch;
                reverse(str.begin(), str.end());
                str += word.substr(i+1, word.size());
                return str;
            }else {
                str += word[i];
            }
        }
        return str;
    }
};