class Solution {
public:
    bool checkPolindrome(string s, int i, int j) {
        while(i<j) {
            if(s[i] != s[j])
            return false;
            else {
                i++;j--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int start = 0, end = s.length()-1;
        while(start<end) {
            if(s[start] != s[end]) {
                // remove one character either s[start] or start[end] and check after removing one charatcter is it polindrom or not
                return (checkPolindrome(s, start+1,end) || checkPolindrome(s,start, end-1));
            }else {
                start++;end--;
            }
        }
        return true;
    }
};