class Solution {
public:
    string thousandSeparator(int n) {
        if(n<1000) return to_string(n);

        string str = to_string(n);
        int rem = str.size() % 3;

        string ans = "";
        int i=0;
     // if size is not multiple of 3 then add first those remaining characters
        if(rem !=0) {
            for(i=0;i<rem;i++) {
            ans += str[i];
            }
            ans = ans+".";
        }
        // rest add into the ans
        int index = 0;
        for(;i<str.size();i++) {
            if(index%3 == 0 && index != 0) {
                ans = ans +"."+str[i];
            }else {
                ans += str[i];
            }
            index++;
        }
        // return ans
        return ans;
    }
};