class Solution {
public:
    int countAsterisks(string s) {
        int ans = 0;
        int temp = 0;
        for(int i=0;i<s.size();i++) {
            if(s[i] == '|' && temp != 1) {
                temp = 1;
            }else if(s[i] =='*' && temp !=1) {
                ans++;
            }else if(s[i] == '|' && temp ==1) {
                temp = 0;
            }
        }
        return ans;
    }
};