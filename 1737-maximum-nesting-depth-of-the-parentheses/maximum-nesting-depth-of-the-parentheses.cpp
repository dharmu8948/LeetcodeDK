class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxi = INT_MIN, count = 0;
        for(int i=0;i<s.size();i++) {
            if(s[i] == '(') {
                count++;
                st.push(s[i]);
            }else if(s[i] == ')' && !st.empty() && st.top() == '('){
                st.pop();
                count--;
            }
            maxi = max(maxi, count);
        }
        return maxi;
    }
};