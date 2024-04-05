class Solution {
public:
    string makeGood(string s) {
      stack<char> st;
        st.push(s[0]);
        for(int i=1;i<s.length();i++) {
            if(st.empty()) {
                st.push(s[i]);
            }
            else {
            char ch = tolower(s[i]);
            char ch1 = tolower(st.top());
            if(st.top() != s[i] && ch == ch1) {
                st.pop();
            }
            else
                st.push(s[i]);
            }
        }
        
        string res = "";
        while(!st.empty()) {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};