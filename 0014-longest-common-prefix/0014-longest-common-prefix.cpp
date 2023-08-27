class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // sorting of array
        sort(strs.begin(), strs.end());
        // creating ans to store the common prefixes
        string ans = "";
        for(int i=0;i<strs[0].length();i++) { // max iterations = length of the first string
        if(strs[0][i] != strs[strs.size()-1][i]) { //// checking the characters of the first and last string
        break;
        }
        // concatinate if the characters are matching
        ans += strs[0][i];

        }
        return ans;
    }
};