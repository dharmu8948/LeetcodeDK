class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        // pushing open brackets into stack ans poping if got close brackets
        for(int i=0;i<s.size();i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') st.push(s[i]);
            else {
                if(!st.empty()) {
                    if((s[i] == ')' && st.top() == '(') || (s[i] == '}' && st.top() == '{') || (s[i] == ']' && st.top() == '[')) st.pop();
                    else return false;
                }else {
                   if(s[i] == ']' || s[i] == '}' || s[i] == ')') return false; 
                }
                
            }
        }
        return st.empty();
    }
};