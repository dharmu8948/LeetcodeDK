class Solution {
public:
     bool isCharacter(char ch) {
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) {
            return true;
        }
        return false;
    }
    string reverseOnlyLetters(string s) {
        int i=0,j = s.length()-1;
        
        while(i<=j) {
            if(isCharacter(s[i]) && isCharacter(s[j])) {
                swap(s[i],s[j]);
                i++;
                j--;
            }else if(!isCharacter(s[i])) {
                i++;
            }else if(!isCharacter(s[j])) {
                j--;
            }else {
                i++;
                j--;
            }
        }
        return s;
    }
};