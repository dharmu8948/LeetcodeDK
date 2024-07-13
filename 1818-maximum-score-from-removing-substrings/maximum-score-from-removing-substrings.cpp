class Solution {
public:
    int maximumGain(string s, int x, int y) {
        char maxChar = 'a';
        char minChar = 'b';
        int maxCharCount = 0;
        int minCharCount = 0;
        int maxVal = x;
        int minVal = y;
        int score = 0;

        if(y>x) {
            maxChar = 'b';
            minChar = 'a';
            maxVal = y;
            minVal = x;
        }
        int n = s.size();
        for(int i=0;i<n;i++) {
            char currChar = s[i];
            if(currChar == maxChar) maxCharCount++;
            else if(currChar == minChar) {
                if(maxCharCount>0) {
                    score += maxVal;
                    maxCharCount--;
                }else {
                    minCharCount++;
                }
            }
            else {
                score += min(maxCharCount, minCharCount)*minVal;
                maxCharCount = 0;
                minCharCount = 0;
            }
        }
        score += min(maxCharCount, minCharCount)*minVal;
        return score;
    }
};