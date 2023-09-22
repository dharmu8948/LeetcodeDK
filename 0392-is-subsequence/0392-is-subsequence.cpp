class Solution {
public:
    bool isSubSeqHelper(string&s, string&t, int m, int n) {
        // base cases
        // return true when all charcters were found from s
        if(m==0) {
            return true;
        }
        //return false if charcters triversed from t and n become zero but m is not
        if(n == 0) {
            return false;
        }
        // ek case solve
        // if charcters are matching
        if(s[m-1] == t[n-1]) {
            return isSubSeqHelper(s, t, m-1, n-1);
        }
         // If last char of two string are not matching then decrease the t index and return recursively
        return isSubSeqHelper(s, t, m, n-1);
    }
    bool isSubsequence(string s, string t) {
      return isSubSeqHelper(s,t, s.size(), t.size());
    }
};