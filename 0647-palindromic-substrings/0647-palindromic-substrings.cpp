class Solution {
public:
    int expandAroundIndex(string s, int i, int j) {
        int count = 0;
        // jab tak match kare tab tak count increment karte raho aur i derease(i--) and j increase(j++) kar do 
        while(i>=0 && j<s.length() && s[i] == s[j]) {
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int count = 0, n = s.length();
        for(int i=0;i<n;i++) {
            // odd part check
            int oddKaAns = expandAroundIndex(s,i,i);
            count += oddKaAns;

            // even part check
            int evenKaAns = expandAroundIndex(s,i,i+1);
            count = count + evenKaAns;
        }
        return count;
    }
};