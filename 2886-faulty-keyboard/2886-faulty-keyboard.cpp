class Solution {
public:
    string finalString(string s) {
        string str;
        for(int i=0;i<s.size();i++) {
            if(s[i] != 'i') {
                str = str + s[i];
            }else {
                reverse(str.begin(), str.end());
            }
        }
        return str;
    }
};