class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> mp;
        for(char ch : s) {
            mp[ch]++;
        }
        int count = 0;
        int isFirstOdd = false;
        for(auto m : mp) {
            if(m.second %2 == 0) count += m.second;
            else{
                count += m.second;
                if(!isFirstOdd) {
                   isFirstOdd = true; 
                }else {
                    count -= 1;
                }
            }
        }
        return count;
    }
};