class Solution {
public:
    int maxScore(string s) {
       int total1 = 0;
       for(char ch : s) {
           if(ch == '1') total1++;
       }
       int max_score = 0;
       int left0 = 0;
       for(int i=0;i<s.size()-1;i++) {
           if(s[i] == '0') left0++;
           else total1--;
          int score = left0 + total1;
          max_score = max(max_score, score);
       }
       return max_score;
    }
};