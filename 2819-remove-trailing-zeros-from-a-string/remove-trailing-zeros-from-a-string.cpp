class Solution {
public:
    string removeTrailingZeros(string num) {
        string str;
        int n = num.size();
        int firstIndex = 0, lastIndex = n-1;
        // removing the trailing zero's from end
        if(num[lastIndex] == '0') {
            while(num[lastIndex] == '0') lastIndex--;
        }
        // collecting rest characters
        for(int i = firstIndex;i<=lastIndex;i++) {
            str += num[i];
        }

        return str;
    }
};