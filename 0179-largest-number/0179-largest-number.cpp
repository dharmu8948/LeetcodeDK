class Solution {
public:
    static bool myComp(string a, string b) { 
        // example a = 30, b = 3
        string t1 = a+b; // t1 = 303
        string t2 = b+a; // t2 = 330
        return t1>t2;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> snums;
        for(auto num : nums) {
            snums.push_back(to_string(num));
        }
        // sorting in reverse order using custom comparator
        sort(snums.begin(),snums.end(),myComp);
        // agar reverse sort krne par bhi phla digit 0 hai it means sare zero pade hai tab 0 return kar do
        if(snums[0] == "0") return "0";
        string ans = "";
        for(auto str : snums) {
            ans += str;
        }
        return ans;
    }
};