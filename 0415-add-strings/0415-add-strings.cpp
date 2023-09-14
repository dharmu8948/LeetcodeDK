class Solution {
public:
    string addUsingRec(string num1, int p1, string num2, int p2, int carry=0) {

        // base case
        if(p1<0 && p2<0) {
            if(carry != 0) {
                return string(1,carry+'0');
            }
            return "";
        }
        // ek case solve karo
        // extracting the digits from both string
        int n1 = (p1>=0 ? num1[p1] : '0') - '0';
        int n2 = (p2>=0 ? num2[p2] : '0') - '0';
        int csum = n1 + n2 + carry;
        int digit = csum%10;
        carry = csum/10;
        string ans = "";
        ans.push_back(digit+'0');

        // baki recursion sambhal lega
        ans += addUsingRec(num1, p1-1, num2, p2-1,carry);
        return ans;
    }
    string addStrings(string num1, string num2) {
        string ans = addUsingRec(num1, num1.size()-1, num2, num2.size()-1);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};