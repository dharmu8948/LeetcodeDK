class Solution {
public:
    int reverse(int x) {
        int num = abs(x);
        int rev = 0;
        while(num>0) {
            if(rev > INT_MAX/10 || rev < INT_MIN/10) return 0;
            rev = rev*10 + num%10;
            num = num/10;
        }
        return x>0 ? rev : -rev;
    }
};