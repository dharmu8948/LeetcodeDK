class Solution {
public:
    int minSteps(string s, string t) {
        map<char, int> mp1, mp2;
        for(char ch : s) {
            mp1[ch]++;
        }
        for(char ch : t) {
            if(mp1.contains(ch)) {
                mp1[ch]--;
            }
        }
        int count = 0;
        for(auto m : mp1) {
            if(m.second>0) {
                count += m.second;
            }
        }
        return count;
    }
};