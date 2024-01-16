class Solution {
public:
    bool isChar(char ch) {
        if((ch>=65 && ch<=90) || (ch>=97 && ch<=122) || (ch>=48 && ch<=57)) {
            cout<<ch<<endl;
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.size();i++) {
            if(isChar(s[i]))
                str += tolower(s[i]);
        }
        cout<<str<<" ";
        for(int i=0, j= str.size()-1;i<str.size()/2;i++,j--) {
            if(str[i] != str[j]) return false;
        }
        return true;
    }
};