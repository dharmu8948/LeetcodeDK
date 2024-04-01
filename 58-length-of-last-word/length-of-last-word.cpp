class Solution {
public:
    int lengthOfLastWord(string s) {
        int space = -1;
        string str;
        for(int i = s.size()-1;i>=0;i--) {
            if(s[i] == ' ' && space == 0) break;
            if(s[i] == ' '){
                space = 1;
                continue;
            }
            else {
                str += s[i];
                space = 0;
            }
        }
        return str.size();
    }
};