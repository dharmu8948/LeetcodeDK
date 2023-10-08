class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> map(128);
        for (char ch: s1) {
            map[ch]++;
        }
        int count = s1.size();
        int left = 0, right = 0;
        while (right < s2.size()) {
            if (map[s2[right++]]-- > 0) count--;
            while (count == 0) {
                if (right - left == s1.length()) return true;
                if (++map[s2[left++]] > 0) count++;
            }
        }
        return false;
    }
};