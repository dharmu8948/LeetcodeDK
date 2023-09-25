class Solution {
public:
    char findTheDifference(string s, string t) {
      s += t;
      char ch = s[0];
      for(int i=1;i<s.size();i++) {
          ch = ch^s[i];
      }
      return ch;
    }
};