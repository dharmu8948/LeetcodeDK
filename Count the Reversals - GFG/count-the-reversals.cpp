//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
    if(s.size()%2 != 0) return -1;
    stack<char> st;
    // first we are removing all valid parenthesis
        for(int i=0;i<s.size();i++) {
            if(s[i]=='{') 
               st.push(s[i]);
            else {
                if(!st.empty() && st.top() == '{')
                   st.pop();
               else
                  st.push(s[i]);
            }
        }
        // if stack is stil not empty then have always even number of elemts , lets count reversal
        int count = 0;
        while(!st.empty()) {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            if(a == b) count+= 1;
            else  count += 2;
        }
        return count;
}