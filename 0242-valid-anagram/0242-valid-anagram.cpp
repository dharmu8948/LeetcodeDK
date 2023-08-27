class Solution {
public:
    bool isAnagram(string s, string t) {
        // map<string, int> mp1;
        // for(int i=0;i<s.length();i++) {
        //     mp[s[i]]++;
        // }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s == t)
        return true;
        else
        return false;
    }
};