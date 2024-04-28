class Solution {
public:
   
    int lengthOfLongestSubstring(string s) {
       set<char> st;
       int longest = 0, i=0, j=0, n = s.size();
       while(i<n && j<n) {
        if(st.contains(s[j])) {
            st.erase(s[i++]);
        }else {
            st.insert(s[j++]);
            longest = max(longest, j-i);
        }
       }
       return longest;
    }
};