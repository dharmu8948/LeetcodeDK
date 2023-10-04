//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &s) {
       unordered_map<char,int> mp{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int prev = mp[s[0]];
        int n  = s.size();
        int sum = prev;
       for(int i=1;i<s.size();i++) {
           sum += mp[s[i]];
            if(mp[s[i]]>prev){
                sum -= prev*2;
            }
            prev = mp[s[i]];
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends