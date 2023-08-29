class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> mp;
        int ans =0;
        for(int i=0;i<s.size();i++) {
            mp[s[i]]++;
        }
        int count = 0;
        for(auto i:mp) {
            // when we find one old then convert remaining old to even
            if(i.second%2 == 1 && count ==1) {
                ans += i.second-1;
            }
            // when we find first old
            else if(i.second % 2 == 1) {
                count++;
                if(count ==1) {
                    //add all element beacuse one element are at middle
                     ans += i.second;
                }
                
            }
            // for even case add all element
            else if(i.second%2 ==0) {
                ans += i.second;
            }
        }
        return ans;
    }
};