class Solution {
public:
    void solve(vector<string> &ans, vector<string> &mapping,string output, int index, string digits) {
        // base case
        if(index>=digits.size()) {
            ans.push_back(output);
            return;
        }
        // ek case solve krna hai baki recursion sambhal lega
        // get number
        int num = digits[index++]-'0';
        // get corresponding string of above number 
        string curr = mapping[num];
       // iterate over string till string length
        for(int i=0;i<curr.size();i++) {
            // push into output string
            output.push_back(curr[i]);
            // make recursive call for other letter combination
            solve(ans, mapping, output, index, digits);
            // backtracking to make output string sync
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        
        vector<string> ans;
        if(digits.size()==0) return ans;
        int index = 0;
        string output = "";
        vector<string> mapping(10);
        mapping[2] = "abc";
        mapping[3] = "def";
        mapping[4] = "ghi";
        mapping[5] = "jkl";
        mapping[6] = "mno";
        mapping[7] = "pqrs";
        mapping[8] = "tuv";
        mapping[9] = "wxyz";
        solve(ans, mapping, output, index, digits);
        return ans;
    }
};