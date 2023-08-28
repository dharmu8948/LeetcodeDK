class Solution {
public:
    bool checkVowel(char ch) {
        if(ch=='A'||ch=='E' || ch=='I'|| ch=='O' || ch=='U' || ch=='a'||ch=='e' || ch=='i'|| ch=='o' || ch=='u') {
            return true;
        }else {
            return false;
        }
    }
    string reverseVowels(string s) {
        int i=0,j = s.size()-1;
        while(i<j) {
            if(checkVowel(s[i]) && checkVowel(s[j])) {
                swap(s[i],s[j]);
                i++;j--;
            }else if(!checkVowel(s[i])) {
                i++;
            }else if(!checkVowel(s[j])) {
                j--;
            }else {
                i++;j--;
            }
        }
        return s;
    }
};