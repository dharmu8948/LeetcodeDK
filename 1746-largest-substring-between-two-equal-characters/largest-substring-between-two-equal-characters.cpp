class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int maxi = -1, n = s.size();
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++) {
            if (mp.find(s[i]) == mp.end()) mp[s[i]]=i;
             else{
                int start = mp[s[i]],end = i;
                maxi = max(maxi, end - start - 1);
            }
        }
        return maxi;
    }
};