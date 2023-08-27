class Solution {
public:
    bool isAnagram(string s, string t) {
         // using sorting
  /*    sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s == t)
        return true;
        else
        return false;   */

        // if length is not same return to false
        if(s.length() != t.length())
        return false;
        // created an array with length of 26
        int arr[26] = {0};
        // adding the character count in s and subtracting count in t, logic behind this is: if count of any charcter is equal in s ans t then arr[i] should be zero else it should not be zero
        for(int i=0;i<s.length();i++) {
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }
        for(int i=0;i<26;i++) {
            if(arr[i] != 0)
             return false;
        }
        return true;
    }
};