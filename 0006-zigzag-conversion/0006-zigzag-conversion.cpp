class Solution {
public:
    string convert(string s, int numRows) {
        // if numRows 1 hai to kuch nahi krna hai bcoz same string ans hoga
        if(numRows==1) return s;
        vector<string> zigzag(numRows);
        int i=0, row = 0;
        int direction = 1; // 1 means top to bottom
        while(true) {
            // agar direction top to bottom hai
            if(direction) {
                // check karo out of bound condition
                while(row<numRows && i<s.size()) {
                    // zigzag me push karo with row++ and i++
                    zigzag[row++].push_back(s[i++]);
                }
                // loop ke baad row = numRows - 2 krna hoga dry run karke dekh lo
                row = numRows - 2;
            }
            // agar direction bottom to top hai
            else {
                // check karo out of bound condition
                while(row>=0 && i<s.size()) {
                     // zigzag me push karo with row-- and i++
                    zigzag[row--].push_back(s[i++]);
                }
                // ab row ki value 1 hogi jab poora triverse kar lenge to for more clearty dry run karna padega
                row = 1;
            }
            // agar i bada ho gaya s ki size se to break kar jaao
            if(i>=s.size()) break;
            // yaha par direction change kar rahe
            direction = !direction;
        }
        // ye annwer store karne ke liye
        string ans = "";
        for(auto str  : zigzag) {
            ans += str;
        }
        // returning ans
        return ans;
    }
};