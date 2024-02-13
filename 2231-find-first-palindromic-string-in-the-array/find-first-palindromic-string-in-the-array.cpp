class Solution {
public:
    bool isPolindrome(string str) {
        int start = 0, end = str.size()-1;
        while(start<end) {
            if(str[start] != str[end]) return false;
            start++;end--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++) {
            if(isPolindrome(words[i])) {
                return words[i];
            }
        }
        return "";
    }
};