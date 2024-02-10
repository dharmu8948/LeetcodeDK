class Solution {
public:
    int expandAroundIndex(string s, int left, int right) {
        int count = 0;
        // jab tak match kare tab tak count increment karte raho aur i derease(i--) and j increase(j++) kar do 
        while(left>=0 && right<s.length() && s[left] == s[right]) {
            count++;
            left--;
            right++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int totalCount = 0, n = s.length();
        for(int center=0;center<n;center++) {
            // odd part check
            int oddKaAns = expandAroundIndex(s,center,center);
            totalCount += oddKaAns;

            // even part check
            int evenKaAns = expandAroundIndex(s,center,center+1);
            totalCount = totalCount + evenKaAns;
        }
        return totalCount;
    }
};