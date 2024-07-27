class Solution {
public:
    int minimumMoves(string s) {
        int i=0, j = s.size(), ans = 0;
        while(i<j) {
            while(s[i] == '0') i++;
            if(s[i] == 'X') {
                ans++;
                i += 3;
            }else {
                i++;
            }
        }
        return ans;
    }
};